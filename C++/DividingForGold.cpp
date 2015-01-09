#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cstddef>
using namespace std;
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a,b,sizeof(a))
#define REPN(x,a,b) for (int x=a; x<b;++x)
#define REP(x,b) REPN(x, 0, b)
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y) cout << #x << " = " << x << "  " << #y << " = " << y << endl;
typedef unsigned long long ll;
int d[100], v[100], Peso[100], value[1000][1000];
stack<pair<int,int> > pila;
void HallarObjetos(int i, int j) {
	if (j <= 0 || i <= 0) return;
	if(value[i][j] == value[i-1][j]) {
		HallarObjetos(i-1,j);
	}
	else {
		pila.push(mp(d[i],v[i]));
		HallarObjetos(i-1,j-Peso[i]);
	}
}
int main() {
	int t, w, n;
	bool first = true;
	while(cin >> t, cin >> w) {
		cin >> n;
		d[n+1]; v[n+1];
		REPN(i,1,n+1) {
			cin >> d[i] >> v[i];
		}
		Peso[n+1];
		REPN(i,1,n+1) {
			Peso[i] = 3*w*d[i];
		}
		value[n+1][t+1];
		REP(i,n+1) value[i][0] = 0;
		REP(j,t+1) value[0][j] = 0;

		REPN(i,1,n+1) {
			REPN(j,1,t+1) {
				if(Peso[i] > j) {
					value[i][j] = value[i-1][j];
				}
				else {
					value[i][j] = max(value[i-1][j],v[i]+value[i-1][j-Peso[i]]);
				}
			}
		}
		if (first) {
			cout << value[n][t] << endl;
			HallarObjetos(n,t);
			cout << pila.size() << endl;
			while(!pila.empty()) {
				cout << pila.top().first << " " << pila.top().second << endl;
				pila.pop();
			}
			first = false;
		}
		else{
			cout << endl;
			cout << value[n][t] << endl;
			HallarObjetos(n,t);
			cout << pila.size() << endl;
			while(!pila.empty()) {
				cout << pila.top().first << " " << pila.top().second << endl;
				pila.pop();
			}
		}
	}
	return 0;
}
