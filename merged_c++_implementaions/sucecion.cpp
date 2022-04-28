#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int fila;

	cout<<"introdusca fila: ";
	cin>>fila;
	cout<<"introdusca columna: ";
	int columna;
	cin>>columna;
	/* asigancion */
	int matriz[fila][columna];
	int valor=1;
	
	for(int i=0;i<fila;i++){
	for(int j=0;j<columna;j++){
		matriz[i][j]=valor;
		valor++;
	}
	}
	/*mostrar la matriz ordenada*/
	for(int n=0;n<fila;n++){
	for(int m=0;m<columna;m++){
		cout<<matriz[n][m]<< " ";
	
	}
	cout<<""<<endl;
	}
}
