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
#define MAXN 21
int main() {
	int n, m, i, rpta = 0;	int a[MAXN], pilaB = 0, pilaA = 0;
	cin >> n;
	REP(i,n) {
		cin >> a[i];
	}
	if(n > 1) {
		sort (a, a+n);
		pilaA = a[n-1];
		for(int i = n-2; i >=0 ; i--) {
			if (pilaA > pilaB)
				pilaB += a[i];
			else
				pilaA += a[i];
		}
		rpta = abs(pilaA - pilaB);
	}
	else
		rpta = a[0];
	cout << rpta << endl;
	
	
	
}
