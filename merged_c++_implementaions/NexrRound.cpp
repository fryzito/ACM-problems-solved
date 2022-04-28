#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int A[n];
	for(int i = 0; i < n; i++) {
		cin >> A[i];
	}
	
	int i = 0;

		while(A[k-1]<=A[i] && i < n && A[i] != 0) {
		i++;
		}
		cout << i << endl;
	return 0;
}

