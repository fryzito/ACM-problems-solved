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
int main() {
	unsigned long long int n;
	bool first = true;
	while(cin >> n) {
		bool normal = true;
		if (first) {
			first = false;
		}
		else {
			cout << endl;
		}
		bool esbisiesto = ( (n%100 != 0) && (n%4 == 0) ) || (n%400 == 0);
		if (esbisiesto) {
			cout << "This is leap year." << endl;
			normal = false;
		}

		if ( n%15 == 0 || (  (n%55 == 0) && ( esbisiesto) ) ) {
			cout << "This is huluculu festival year." << endl;
			normal = false;
		}
		
		if (normal)
			cout << "This is an ordinary year." << endl;
	}
}
