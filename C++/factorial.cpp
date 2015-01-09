#include <cstdio>
#include <iostream>

using namespace std;
void mostrar(int numeros[]){
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++){
			cout<<numeros[i][j]<<endl;
		}
	}
}
long long int factorial(int numero){
	int contador=0;
	long long int acumulador=1;
	int actualizador=10;
	for(int i=1;i<=numero;i++){
		acumulador=acumulador*i;
	}
	if(acumulador%10==0)
	{
		contador=contador+1;
		actualizador=actualizador*10;
	}
	return acumulador;
}

int main(){
	int numero;
	cout << "digite el numero: ";
	cin>>numero;
	cout<< factorial(numero);
	int numeros[1][1];
	numeros[0][0]=1;
	numeros[0][1]=1;
	numeros[1][0]=1;
	numeros[1][1]=1;
	cout<<" "<<endl;
	mostrar(numeros);
	return 0;
}
