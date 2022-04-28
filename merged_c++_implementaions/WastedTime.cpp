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
	int n, k, i , j;
	double x, y, perim = 0;
	vector<pair <double,double> > v;
	cin >> n >> k;
	REP(i,n) {
		cin >> x >> y;
		v.pb(mp(x,y));
	}
	//REP (i,n) cout << v[i].first << " = " << v[i].second << endl;
	REPN(j,1,n) {
		perim += sqrt(((v[j].first - v[j-1].first) * (v[j].first - v[j-1].first )) + ((v[j].second - v[j-1].second)*(v[j].second - v[j-1].second)));

	}
	
	printf("%.9f\n",perim /50 * k );
	
	
	
	
	
	





}
