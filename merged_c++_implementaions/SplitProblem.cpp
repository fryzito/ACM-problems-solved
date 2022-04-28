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
#define MAXN 1000
int main() {
	int n, a, b, i;
	bool si = false;
	cin >> n;
	vector <pair<int,int> > v;
	while (n--) {
		cin >> a >> b;
		b = a+b;
		v.pb(mp(a,b));
	}
		REPN(i,1,v.size()) {
			if ((v[i].first == v[i-1].second) && (v[i].second == v[i-1].first)) {
				si = true;
				break;
			}
		}
		if (si)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	return 0;
}
