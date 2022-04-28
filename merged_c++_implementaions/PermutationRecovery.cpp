#include <iostream>
#include <cstdio>
#include <vector>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main() {
	int n,m;
	cin >> n;
	int rpta[n];
	while(n) {
		for (int i = 0; i < n; i++) {
			cin >> m;
			dbg(m);
			rpta[m] = i+1;
			dbg(rpta[m]);
		}
		for ( int i = 0; i < n; i++) {
			if(i)
				cout << ", " <<rpta[i];
			else
				cout << rpta[i];
		}
		cout << endl;
	cin >> n;
	}
	return 0;
}

