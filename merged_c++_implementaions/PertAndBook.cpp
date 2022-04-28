#include <cstdio>
#include <iostream>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main() {
	int suma, l, ma, mi, ju, vi, sa, dom;
	cin >> suma;
	int A[7];
	for (int i = 0; i < 7; i++) {
		cin >> A[i];
	}
	int i = -1;
	while (suma  > 0) {
		i = (i+1)%7;
		suma -= A[i];
	}
	cout << i+1 << endl;
	return 0;
}
