#include <cstdio>
#include <iostream>
#define LL long long
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main() {
	LL n, sum;
	cin >> n;
	while(n) {
		sum = n;
		while (sum >=10) {
			sum = 0;
			while(n != 0) {
				sum += n % 10;
				n /= 10;
			}
			n = sum;
		}
		cout << sum << endl;
		cin >> n;
	}
	return 0;
}
