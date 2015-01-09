#include <cstdio>
#include <iostream>
using namespace std;
long num[1000002] = { 0 };
long cont[1000002] = { 0 };
long conta = 0;
int main() {
	for(long i = 1; i <= 1000000; i++) {
		num[i] = i;
	}
	for(long i = 2; i <= 100; i++) {
		num[i*i*i] = -1;
	}
	for(long i = 1; i <= 1000000; i++) {
		if (num[i] != -1) {
			conta++;
			cont[i] = conta;
		}
	}
	long n, m;
	cin >> n;
	for (int k = 1; k <= n; k++) {
		cin >> m;
		if (num[m] == -1)
			cout << "Case "<< k << ": Not Cube Free" << endl;
		else
			cout << "Case "<< k << ": "<< cont[m] << endl;
	}
}
