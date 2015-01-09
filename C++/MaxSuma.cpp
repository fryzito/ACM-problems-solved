#include <cstdio>
#include <iostream>
#include <cmath>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main(){
	int n;
	cin >> n;
	int A[n], suma = 0, mejor = 0;
	for (int i = 0; i < n; i++)	
		cin >> A[i];
	for (int i = 0; i < n ; i++) {
		if (suma > 0)
			suma = suma + A[i];
		else
			suma = A[i];
		if (mejor < suma)
			mejor = suma;
		dbg(suma);
	}
	cout << mejor << endl;
	return 0;
}
