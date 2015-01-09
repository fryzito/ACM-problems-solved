#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int a, b, cont = 0, ieva = 0;
	cin >> a >> b;
	while (a || b) {
		ieva = 0;
		while (a != 0 || b != 0) {
			if ((a%10) + (b%10) + ieva > 9) {
				cont++;
				ieva = 1;
			}
			else {
				ieva = 0;
			}
			a /= 10;
			b /= 10;
		}
		if (cont > 0)
			if (cont == 1)
				cout << "1 carry operation." <<endl;
			else
				cout << cont << " carry operations." <<endl;
		else
			cout << "No carry operation." <<endl;
		
		cont = 0;
		cin >> a >> b;
	}
	return 0;
}
