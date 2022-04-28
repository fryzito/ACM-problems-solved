/*
	problems about prime number for example find the 1000th prime number
*/
#include<cstdio>
#include<iostream>
#include <math.h>
using namespace std;
bool es_primo(int n){
	if(n == 1) return false;
	else {
		if(n < 4) return true;
		else{
			if(n % 2 == 0) return false;
			else{
				if(n < 9) return true;
				else{
					if(n % 3 == 0) return false;
					else{
						int r = (int)sqrt(n);
						int f = 5;
						while(f <= r){
							if(n % f == 0) return false;
							if(n % f+2 == 0) return false;
							f = f+6;
						}
						return true;
					}
				}
			}
		}
	}
}
int main(){
	long n,contador = 1,candidato;
	cin >> n;
	cout << "2" <<endl; //sabemos que el dos es primo por eso lo escribimos 100pre
	for(candidato = 1; contador != n; candidato = candidato + 2){
		if(es_primo(candidato)){
			contador = contador + 1;
			cout << candidato << endl;
		}
	}
}
