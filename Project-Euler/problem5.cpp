#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	long numero,i;
	numero = i = 2;
	bool falta = true;
	while(falta){
		if(numero%i == 0)
			i = i+1;
		else{
			numero = numero +1;
			i = 2;
		}
		if(i == 21)
			falta = false;
	}
	cout << numero << endl;
}
