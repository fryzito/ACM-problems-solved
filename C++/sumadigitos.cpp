#include <cstdio>
#include <iostream>
using namespace std;
int sumaDigitos(string numero)
{
	string lista = "0123456789";
	int contador=0;
	
	for (int I=0; I<numero.length();I++)
	{
		int valor =-1;
		for(int k=0;k<lista.length();k++)
		{
			valor= valor + 1;
			if(numero[I]==lista[k])
			{
				contador = contador + valor;
			}
		}
	}
	return contador;
}
int main()
{
	string numero;
	cout<<"Ingrese un numero"<<endl;
	cin>>numero;
	cout<<sumaDigitos(numero)<<endl;
}
