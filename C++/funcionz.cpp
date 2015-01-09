/* la funcion f(z)"la cantidada de ceros que tiene el numero falctorial de n!"*/
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
unsigned long long numerocincos(unsigned long long numero){
	if((numero<5))
	return 0;
	else
	{
		if((numero%5==0))
			return numerocincos(numero/5)+1;
		else
		if(numero/5==0)
			return numerocincos(numero/5);
		else
		return 0;
	}
}

int main(){
		unsigned long long numero;
		cout<<"ingrese el numero evaluado: ";
		cin>>numero;
		long long  con=numero/5;
		long  long arreglo[con];
		
		long long cinco=0;
		long long acumulador=0;
		for(long k=0;k<con;k++){
		cinco=cinco+5;
		arreglo[k]=cinco;
		acumulador=acumulador+numerocincos(arreglo[k]);
		}
		cout<<acumulador;
		//cout<<numerocincos(numero);acm-icpc-cusco@googlegroups.com
}
