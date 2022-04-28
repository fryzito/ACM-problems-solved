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

int main() {
	int t1, t2, x1, x2, t, y1, y2;
	cin >> t1 >> t2 >> x1 >> x2 >> t;
	for (int i = t; i >= 0; i--) {

			if (y1 * (t - t1) == y2 * (t2 - t)) {
				y1 = t - t1;
				y2 = t2 - t;
				cout << y1 << "  " << y2 << endl;
				break;
				
			}

	}
}
