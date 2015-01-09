#include <cstdio>
#include <iostream>
#include<sstream>
#define REP( i, a, b) for(int i = int(a); i < int(b); i++)
#define dbg(x) cout << #x << " = " << x << "\n";
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
using namespace std;
long hallarsuma(int ni) {
	return (ni * (ni +1))/2;
}
int HallarDivisorts(long n) {
	int cont = 0;
	for (long i = n; i > 0; i--) {
		if (n % i == 0) {
			cont++;
		}
	}
	return cont;
}
int main() {
		int ni = 30000;
		for (int r = 0; r < 50; r++) {
			long n = hallarsuma(ni);
			dbg(hallarsuma(ni));
			int divisors = HallarDivisorts(n);
			cout << " numero de divisores " <<divisors <<endl;
			ni++;
		}
	return 0;
}
