#include <cstdio>
#include <iostream>
using namespace std;
double ToFar( double nro) {
	return (9*nro)/5 +32;
}
double ToCel(double nro) {
	return ((nro-32)*5)/9;
}
int main() {
	int nc;
	double a,b;
	cin >> nc;
	for(int i=0; i<nc;i++) {
		cin >> a >> b;
		a = ToFar(a) + b;
		double cel = ToCel(a);
		printf("Case %d: %.2f\n",i+1,cel);
	}
	return 0;
}
