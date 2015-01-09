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

int main() {
	int tc, n;
	cin >> tc;
	REPN(t, 1, tc + 1) {
		cin >> n;
		int x[n], y[n];
		REP(i, n) cin >> x[i] >> y[i];
		REPN(i, 1, n) { x[i] += x[i - 1]; y[i] += y[i - 1]; }
		double area = 0;
		REPN(i, 1, n - 1) {
			int py = y[i] - y[0];
			int px = x[i] - x[0];
			int sy = y[i + 1] - y[0];
			int sx = x[i + 1] - x[0];
			area += (px * sy - py * sx);
		}
		area /= 2;
		int ext = 0;
		REP(i, n) {
			int j = (i+1)%n;
			ext += __gcd(abs(y[i] - y[j]), abs(x[i] - x[j]));
		}
		int interior = area - ext / 2 + 1;
		printf("Scenario #%d:\n", t);
		printf("%d %d %0.1f\n\n", interior, ext, area);
	}
	return 0;
}