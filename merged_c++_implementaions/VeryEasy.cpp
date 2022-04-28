#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a,b,sizeof(a))
#define REPN(x,a,b) for (int x=a; x<b;++x)
#define REP(x,b) REPN(x, 0, b)
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y) cout << #x << " = " << x << "  " << #y << " = " << y << endl;
#define MAXN 21
int main() {
	unsigned long long int i,j ,N, A, rpta = 0;
	while(cin >> N,cin >> A) {
		REPN(i,1,N+1) {
			unsigned long long int p = (unsigned long long int)pow((double)A,i);
			rpta += i * p;
		}
		cout << rpta << endl;
		rpta = 0;
	}
	return 0;
}
