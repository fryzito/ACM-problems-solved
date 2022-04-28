#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	long n, m, a, b, c;
	cin >> n;
	while(n--) {
		cin >> m;
		long long sum = 0;
		for (int i = 0; i < m; i++) {
			cin >> a >> b >> c;
			sum += a*c;
		}
		cout << sum << endl;
	}
}
