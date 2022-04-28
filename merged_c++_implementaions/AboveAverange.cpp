#include <cstdio>
#include <iostream>
#define dbg(x) cout << #x << " = " << x << "\n";
using namespace std;
int main() {
	int n, m;
	cin >> n;
	while (n--) {
		double rpta = 0;
		int cont = 0;
		cin >> m;
		double a[m];
		for (int i = 0; i < m; i++) {
			cin >> a[i];
			rpta += a[i];
		}
		rpta = rpta/(double)m;
		for (int i = 0; i < m; i++) {
			if (a[i] > rpta)
				cont++;
		}
		rpta = ((double)cont / (double)m) * 100;
		printf("%.3f%% \n",rpta);
	}
}
