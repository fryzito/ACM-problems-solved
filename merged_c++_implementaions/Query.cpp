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
int main() {
	int n, i, j, m,k, x, y, mayor = 0;
	cin >> n;
	int A[n];
	vector< pair<int,int> > v;
	REP(i,n) {
		cin >>A[i];
	}
	cin >> m;
	REP(j,m) {
		cin >> x >> y;
		x--;
		REPN(k,x,y) {
			mayor = max(mayor,A[k]);
		}
		cout << mayor << endl;
		mayor = 0;
	}	
	
	return 0;
}
