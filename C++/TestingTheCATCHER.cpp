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
using namespace std;
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a,b,sizeof(a))
#define REPN(x,a,b) for (int x=a; x<b;++x)
#define REP(x,b) REPN(x, 0, b)
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y) cout << #x << " = " << x << "  " << #y << " = " << y << endl;
#define MAXN 10000
int DP(vector<int> v) {
	int i, j, maxo = 0, cont = 1;
	int menor = v[v.size()-1];
	for(int i = v.size()-1; i > 0 ; i--) {
			if (menor <= v[i -1]) {
				cont++;
				menor = v[i -1];
			}
		maxo = max(maxo,cont);
	}
	return maxo;
}
int main() {
	int n, cont = 1;
	cin >> n;
	loop:
	vector<int> v;
	while (n != -1) {
		v.pb(n);
		cin >> n;
	}
	
	cout << "Test #" <<cont<< ":" <<endl;
	cout << "  maximum possible interceptions: " << DP(v) << endl;
	cont++;
	cin >> n;
	if (n != -1) goto loop;
	return 0;
}
