#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m, k;
	cin >> n;
	while(n--) {
		cin >> m;
		int suma = 0;
		for(int i = 0; i < m; i++) {
			cin >> k;
			suma += k;
		}
		cout << suma%2 << endl;	
	}
}
