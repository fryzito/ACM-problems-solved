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

using namespace std;

#define pb push_back
#define mp make_pair

#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a,b,sizeof(a))
#define REP(x,a,b) for (int x=a; x<b;++x)

#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x, y) cout << #x << " = " << x << "  " << #y << " = " << y << endl;
#define dbg3(x, y, z) cout << #x << " = " << x << "  " << #y << " = " << y << "  " << #z << " = " << z << endl;
#define dbg4(x, y, z, w) cout << #x << " = " << x << "  " << #y << " = " << y << "  " << #z << " = " << z << "  " << #w << " = " << w <<  endl;

#define sqr(x) (x)*(x)

vector < pair < double, double > > v;
vector <int> Y;
vector <int> ind;
int n;
const double oo = 0x7FFFFFFF;

bool cmp(int a, int b) {
	return v[a].second < v[b].second;
}

double distancia(int a, int b) {
	if ((v[a].first - v[b].first > 10000) || (v[a].second - v[b].second > 10000)) return oo;
	return sqrt(sqr(v[a].first - v[b].first) + sqr(v[a].second - v[b].second));
}

double conquer(double best) {
	REP(i, 0, ind.size()) {
		for (int j = i + 1; j < i + 8 && j < ind.size(); j++) {
			double d1 = distancia(ind[i], ind[j]);
			if (d1 < best) best = d1;
		}
	}
	return best;
}

double divandconq(int a, int b) {
	double res = oo;
	if (b - a < 3) {
		REP(i, a, b + 1) {
			REP(j, i + 1, b + 1) {
				double d1 = distancia(i, j);
				if (d1 < res) res = d1;
			}
		}
		return res;
	}
	
	int mid = (a + b) / 2;
	double d1 = divandconq(a, mid);
	double d2 = divandconq(mid + 1, b);
	res = min(d1, d2);
	ind.resize(0);
	
	REP(i, 0, n) {
		if (Y[i] >= a && Y[i] <= b && fabs(v[mid].first - v[Y[i]].first) < res) {
			ind.pb(Y[i]);
		}
	}
	if (ind.size() > 1) res = conquer(res);
	return res;
}


int main() {
	while (cin >> n && n != 0) {
		v.resize(n);
		Y.resize(n);
		REP(i, 0, n) {
			cin >> v[i].first >> v[i].second;
		}
		sort(ALL(v)); // ordena respecto a x
		REP(i, 0, n) Y[i] = i;
		sort(ALL(Y), cmp); // ordena respecto a y
		
		double d = divandconq(0, n - 1);
		if (d < 10000)
			printf("%0.4f\n", d);
		else
			cout << "INFINITY\n";
	}
	return 0;
}
