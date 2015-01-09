#include <cstdio>
#include <iostream>
using namespace std;
int MCD(int a, int b) {
	if(b==0) return a;
	return MCD(b,a%b);
}
int main() {
	int a,b;
	cin >> a  >> b;
	cout << MCD(a,b) << endl;
	return 0;
}
