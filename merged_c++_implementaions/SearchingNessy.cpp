#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n,a,b;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		a=a/3;
		b=b/3;
		cout<< a*b <<endl;
	}
}
