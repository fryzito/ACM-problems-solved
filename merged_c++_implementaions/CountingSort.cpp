#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
void conting(vector<int> A,vector<int> &B, int k) {
	vector<int> C;
	for(int i = 0; i<= k; i++) {
		C.push_back(0);
	}
	for(int i = 1; i<= A.size(); i++) {
		C[A[i]]++;
	}
	for(int i = 1; i<= k; i++) {
		C[i] = C[i]+C[i-1];
	}
	for(int i = A.size()-1; i >= 0; i--) {
		B[C[A[i]]] = A[i];
		C[A[i]]--;
	}
}
int main() {
	int k = 9;
	int aux[] = {1,0,4,5,3,2,8,6,3,4,5};
	vector<int> A(aux,aux+11);
	vector<int> B(11,0);
	conting(A,B,k);
	for(int i = 1; i <= B.size(); i++) cout << B[i] << " ";
	cout << endl;
	return 0;
}

