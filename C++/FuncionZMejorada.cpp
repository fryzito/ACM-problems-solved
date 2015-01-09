#include <cstdio>
#include <iostream>
using namespace std;
int main()
{	
	long numero=0;
	long contador=0;
	cout<<"Ingrese un numero"<<endl;
	cin>>numero;
	while(numero >=5)
	{
		numero = numero/5;		
		contador = contador + numero;
	}
	cout<<contador<<endl;
}
