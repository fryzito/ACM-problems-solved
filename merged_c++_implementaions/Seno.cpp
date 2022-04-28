#include <cstdio>
#include <iostream>
#define dbg(x) cout << #x << " = " << x << "\n";
using namespace std;
int fac(int a){
	int f = 1;
	for (int i = 1;i <= a;i++) {
		f *= i;
	}
	return f;
}
double pow (double a,int n){
	double t;
	if (n == 0) return 1;
	if (n % 2 == 1)
		return a*pow(a,n-1);
	t = pow(a,n/2);
	return t * t;
}
int main() {
	double x, rpta;
	int n;
	cin >> x;
	cin >> n;
	x = (3.14159265359 * x) / 180;
	dbg(x);
	for (int i = 0; i < n; i++) {
		rpta += pow(-1,i) * (pow(x,2*i+1))/(fac(2*i+1));
		dbg(rpta);
		dbg(fac(2*i + 1));
		dbg(pow(x,2*i + 1));
	}
	cout << rpta << endl;
}
