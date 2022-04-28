#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	long long int a,b;
	int n;
	cin >> n;
	while(n--) {
		cin >> a >> b;
		if (a < b)
			cout << "<" << endl;
		else {
			if (a > b)
				cout << ">" << endl;
			else 
				cout << "=" << endl;
		}
	}
}
