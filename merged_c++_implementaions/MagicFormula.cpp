#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int a, b, c, d, l;
	long fun, cont = 0;
	cin >> a >> b >> c >> d >> l;
	while(a || b || c || d || l) {
		for ( int i = 0; i <= l; i++) {
			fun = (a*i*i) + (b*i) + c;
			if (fun % (long)d == 0)
				cont++;
		}
		cout << cont << endl;
		cont = 0;
		cin >> a >> b >> c >> d >> l;
	}
	return 0;
}

