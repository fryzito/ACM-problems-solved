/*
	problems about prime number for example find the sum the below 2000000 prime number
*/
#include<cstdio>
#include<iostream>
#include <math.h>
#define db(x) cout << #x <<" = "<< x <<endl;
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
							if(n % (f+1) == 0) return false;
							if(n % (f+2) == 0) return false;
							if(n % (f+3) == 0) return false;
							if(n % (f+4) == 0) return false;
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
	long long int contador = 0;
	for(int i = 1; i < 2000000; i++){
		if(es_primo(i)){
			cout<<"  " << i <<endl;
			contador = contador + i;			
		}
	}
	db(i);
	cout << "El la suma es " << endl;
	cout << contador << endl;
}
