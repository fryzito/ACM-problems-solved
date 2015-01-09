#include<cstdio>
#include<iostream>
#define N 1000
using namespace std;
int sumdiv(int n){
	int p = N /n;
	return n * (p * (p+1))/2;
}
int main(){
	cout << sumdiv(3)+sumdiv(5)-sumdiv(15);
}
	