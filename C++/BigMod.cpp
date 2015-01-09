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
ll potencia(ll a,ll n, ll m){
	ll t;
	if(n == 0) return 1;
	if (n % 2 == 1)
		return (a*potencia(a,n-1,m)) % m;
	t = potencia(a,n/2,m);
		return (t * t) % m;
}

int main() {
	ll B, P, M;
	ll rpta;
	while (cin >> B >> P >> M) {
		rpta = potencia(B,P,M);
		cout << rpta << endl;
	}
	return 0;
}
