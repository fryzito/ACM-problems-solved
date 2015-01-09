#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#define MAXN 100002
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y) cout << #x << " = " << x << " " << #y << " = " << y << endl;
using namespace std;
int n2 = 0, n1 = 0, n3 = 0;
bool cumple(int n) {
	if(n == 1) n1++;
	if(n == 2) n2++;
	if(n == 3) n3++;
	if(n3 && n1) { n3--; n1--; return true;}
	if(n2 == 2) {n2 -= 2; return true;}
	return false;
}
int main() {
	int n;
	cin >> n;
	int A[n], cont = 0;
	for(int i = 0; i < n; i++)
		cin >> A[i];
	for(int i = 0; i < n; i++) {
		if(A[i] == 4)
			cont++;
		else
			if(cumple(A[i]))
				cont++;
	}
	if(n2 && n1==1) {cont++; n1--; n2--;}
	if(n2 && n1>=2) {cont++; n1 -= 2; n2--;}
	cont += n3 + (n1/4) + n2;
	if(n1%4 != 0) cont++;
	cout << cont << endl;
}

