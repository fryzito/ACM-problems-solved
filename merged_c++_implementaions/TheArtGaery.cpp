#include <cstdio>
#include <iostream>
using namespace std;
bool isConvex(int n, int x[], int y[]) {
	int pos = 0, neg = 0;
	for (int i = 0; i < n; i++) {
		int prev = (i + n - 1) % n, next = (i + 1) % n;
		int pc = (x[next] - x[i])*(y[prev]-y[i]) - (x[prev]-x[i])*(y[next]-y[i]);
		if(pc < 0) {
			neg++;
		} else if(pc > 0) {
			pos++;
		}
	}
	return (neg == 0) || (pos == 0);
}
int main() {
	int n;
	cin >> n;
	while (n) {
		int x[n]; int y[n];
		for (int i = 0; i < n ; i++) {
			cin >> x[i] >> y[i];
		}
		if (isConvex(n, x, y))
			cout << "No" << endl;
		else
			cout << "Yes" << endl;		
		cin >> n;
	}
	return 0;
}
