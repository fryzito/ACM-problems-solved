#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	string fila1="qwertyuiop";
	string fila2="asdfghjkl;";
	string fila3="zxcvbnm,./";
	string palabra;
	int acumulador=0;
	int indexador=0;
	cin>>palabra;
	for(int k=0;k<10;k++)
	{
		if((palabra[indexador]==fila1[k])||(palabra[indexador]==fila2[k])||(palabra[indexador]==fila3[k]))
		{
			
			acumulador=acumulador+1+K;
			indexador=indexador+1;
		}


	}
	cout<<acumulador<<endl;
}
