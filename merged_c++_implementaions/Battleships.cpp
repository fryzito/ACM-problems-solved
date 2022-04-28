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
char M[101][101];
int m, cont = 0;
bool revisar(int i, int j) {
	if ( (i < m) && (i >= 0) && (j < m) && (j >= 0) ) {
		if (M[i][j] == '@')
			return true;
		else
			return false;
	}
	else
		return true;
}
int main() {
	int n;
	cin >> n;
	REP(i,n) {
		cin >> m;
		REP(j,m)
			REP(k,m)
				cin >> M[j][k];
		if (m==1 && M[0][0] == 'x') {cont++; goto loop;}
		REP(j,m)
			REP(k,m) {
				if (M[j][k] == 'x') {
					if(revisar(j-1,k-1)&& revisar(j-1,k)&& revisar(j-1,k+1)&& revisar(j,k-1)&& revisar(j,k+1)&& revisar(j+1,k-1)&& revisar(j+1,k)&& revisar(j+1,k+1)) {
						cont = cont;
					}
					else
						cont++;
				}
			}
		loop:
		printf("Case %d: %d\n",i+1,cont);
		cont = 0;
	}

	
	return 0;
}
