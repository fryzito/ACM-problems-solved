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
	int n, i, j, x,cont = 0;
	cin >> n;
	vector <int> v;
	REP(i,n) {
		cin >> x;
		v.pb(x);
	}
	sort (ALL(v));
	//REP(j,n) cout << v[j] << " ";
	REPN(j,1,n) {
		if (v[j] == v[j-1]) {
			cont++;
			j += 1;
		}
	}
	
	
	cout << cont/2 << endl;
	
	
	
	return 0;
}
