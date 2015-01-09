#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	long n,rpta;
	cin >> n;
	rpta = n*(n+1)/2;
	rpta = rpta * rpta;
	rpta = rpta - (n*(n+1)*(2*n+1)/ 6);
	cout << rpta << endl;
}
