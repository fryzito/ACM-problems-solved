#include<cstdio>
#include<iostream>
using namespace std;
bool factores(int n){
	for(int i = 2; i <= n / i; i++){
		while(n % i == 0){
			if(i > 5) return false;
			n = n / i;
		}
	}
	if(n > 5) return false;
	return true;
}
int main(){
	int numero = 1500;
	int n = 51200000,rpta,contador = 1000;
	while(contador < numero){
		if(factores(n)){
			contador++;
			rpta = n;
		}
		n++;
	}
	cout <<"The 1500'th ugly number is " << rpta << endl;
}
