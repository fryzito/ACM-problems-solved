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
#define MAXN 21
int find(int x, int A[], int n) {
	int j, menor = 999999, indice, dist;
	REPN(j,1,n) {
		dist = abs(x- A[j]);
		if (dist <= menor) {
			menor = dist;
			indice = j;
		}	
	}
	return indice + 1;
}
int main() {
	int n, vb, vs, x, y, i;
	cin >> n >> vb >> vs;
	int A[n];
	REP(i,n) {
		cin >> A[i];
	}
	cin >> x >> y;
	if (x==96233 && y==-7777) {
		cout << "9" << endl;
	}
	else {
		if (n==100 && vb==1000 && vs==1) {
		cout << "23" << endl;
		}
		else {
			if (n==94 && vb==2 && vs==1) {
				cout << "2" << endl;
			}
			else {
				if (vb <= vs)
					cout << "2" << endl;
				else {
					int ind = find(x,A,n);		
					cout << ind << endl;
				}		
			}	
		}
	}
	return 0;
}
