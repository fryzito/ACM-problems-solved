#include <cstdio>
#include <iostream>

using namespace std;
unsigned long long int factorial(int numero){
	if((numero==0)||(numero==1))
	return 1;
	else{
	long long int auxiliar=(factorial(numero-1)*numero);
	return (factorial(numero-1)*numero);//auxiliar;
	}
	
}
int funcionZ( unsigned long long  numero){
	int acumulador2=0;
	int count=0;
	unsigned long long int  resultado=factorial(numero);
	while(resultado>0){
		if(	resultado % 10==0) 
		{
			acumulador2=acumulador2+1;
			
		}
		resultado=resultado/10;
	}
	return acumulador2;
}

int main(){
	int numero;
	cout << "digite el numero: ";
	cin>>numero;
	cout<< "fac: "<<factorial(numero)<<endl;
	cout<< " Z: "<<funcionZ(numero);
}
