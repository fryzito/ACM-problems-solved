#include <cstdio>
#include <iostream>

using namespace std;
bool Esprimo(int numero){
	int contador=0;
	for(int i=1;i<=numero;i++){
		if(numero %i==0)
		contador=contador+1;
	}
	if(contador==2)
	return true;
	else
	return false;
}

int main(){
	int numero;
	cout << "introdusca el numero: ";
	cin >>numero;
	//Esprimo(numero);
	cout <<Esprimo(numero);
}
