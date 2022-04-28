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
#define MAXN 10000
int way[MAXN];
int main() {
	int n, xo, i, j, x1, x2, max2 = -1, minx1 = 999, mayor, mayor1;
	bool bol1 = false ,bol2 = false;
	cin >> n >> xo;
	REP(i,n) {
		cin >> x1 >> x2;
		if (x2 < x1) swap(x2,x1);
		minx1 = min(minx1,x1);
		max2 = max(max2,x2);
		REPN(j,x1,x2+1) {
			way[j]++;
		}
	}
	REPN(i,xo,max2+1) {
		if (way[i] == n) {
			mayor = i - xo;
			bol1 = true;
			break;
		}
	}
	for (int i = xo; i >= minx1; i--) {
		if (way[i] == n) {
			mayor1 = xo - i;
			bol2 = true;
			break;
		}
	}

	if(bol1 && bol2)
		cout << min(mayor1,mayor) << endl;
	else if (bol1)
				cout << mayor << endl;
			else if (bol2)
						cout << mayor1 << endl;
					else
						cout << "-1" << endl;
	return 0;
}
