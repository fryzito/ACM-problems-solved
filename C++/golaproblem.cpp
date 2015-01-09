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
int main () {
	int i, j, a, b;
	cin >> a >> b;
	while (a || b) {
		 int ai, bi, maya = -1, mayb = -1;
		REP(i,a) {
			cin >> ai;
			maya = max(maya,ai);
		}
		
		REP(i,b) {
			cin >> bi;
			mayb = max(mayb,bi);
		}
		printf("%c\n", mayb > maya ? 'Y' : 'N' );
		cin >> a >> b;
	}
	

	return 0;

}
