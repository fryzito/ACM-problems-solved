#include<cstdio>
#include<iostream>
using namespace std;
long long int fibonaciR(long n){
	long long int  t;
	long long int i = 1;
	long long int j = 0;
	for(int k = 1; k <= n; k++){
		t = i+j;
		i = j;
		j = t;
	}
	return j;
}
int main(){
	long n;
	long long int contador = 0;
	while(cin >> n){
		cout << fibonaciR(n) << endl;
		contador = contador + fibonaciR(n);
	}
	cout << "la suema es" << contador <<endl;
}
