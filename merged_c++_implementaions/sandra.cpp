#include <cstdio>
#include <iostream>
using namespace std;
int recorrerderecha(string cadena, char i,int k) {
		if((i==cadena[k])||('w'==cadena[k]))
		{
			if (k==cadena.length()-1) 
			{	k=0;}
			else 
			{	k = k+1;}
			return (1 + recorrerderecha(cadena,i,k));
		}
		else
			return 0;	

}
int recorrerisquierda(string cadena, char i,int k) {
		if((i==cadena[k])||('w'==cadena[k]))
		{
			if (k==0) 
			{	k=cadena.length()-1;}
			else 
			{	k = k-1;}
			return (1 + recorrerisquierda(cadena,i,k));
		}
		else
			return 0;	

}
int numero(string cadena,int k,int tamanio) {
	char var,var1;
	int d,i;
	if(cadena[k+tamanio] == 'b' )
	{
		var = 'r';
		var1 = 'b';
	}
	else
	{
		var = 'b';
		var1 = 'r';
	}
	d = recorrerderecha(cadena,var,k-1+tamanio);
	i = recorrerisquierda(cadena,var1,k+tamanio);
	return i+d;
}

int buscar(string palabra2, string palabra, int tamanio, int contador, bool c,int a, char ultimo)
{
	if(tamanio > contador) 
	{
		if(((ultimo == 'r') && (palabra[contador]== 'b')) || (( ultimo == 'b') && (palabra[contador]== 'r'))) 
		{
			int b = numero(palabra2, contador);
			c = true;
			if(b > a)  a=b;
			contador = contador+1;
			ultimo = palabra[contador];
			return buscar(palabra,tamanio,contador,c,a,ultimo);
		}				
		else 
		{
			contador = contador+1;
			return buscar(palabra,tamanio,contador,c,a,ultimo);
		}
	}
	else
		if(c==false){
			return tamanio;
			}
		else
		{
			return a;
		}
}

int main() {
	bool b = false;
	int cont = 0;
	int rpta = 0;
	string name, name2;
	name2 = name+name+name;
	cin >> name;
	int n = name.length();
	rpta = buscar(name2,name,n-1,cont,b,rpta,name[0]);
	cout<<rpta<<endl;
	rpta = numero(name,0);
	cout<<rpta<<endl;
	return 0;
}
