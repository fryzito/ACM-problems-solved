#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

 bool Esprimo(int numero){
	float radicando=sqrt(numero);	
	int partedecimal=(int)radicando;
	int contador=0;
	for(int i=1;i<=partedecimal;i++){
		int [11]listaprimos;
		listaprimos[0]=2;
		listaprimos[0]=3;
		listaprimos[0]=5;
		listaprimos[0]=7;
		if(partedecimal%i==0)
		{
			contador=contador+1;
		}
	}
	/*if(contador!=0)
	return false;
	else*/
	return contador;
}
int main()
{
	int  numero;
	cout << "introdusca el numero: ";
	cin >>numero;
	//Esprimo(numero);
	cout <<Esprimo(numero);
}
