/* Robot recolector de basura*/
#include <iostream>
#include<cstdio>
using namespace std;

int main(){
	
	int fila,columna;
	cout<<"digite fila: ";
	cin>>fila;
	cout<<"digite columna: ";
	cin>>columna;
	int tablero[fila][columna];
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			tablero[i][j]=rand()%10;
		}
	}
	/*mostrar tablero*/
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<tablero[i][j]<<" ";
		}
		cout<<""<<endl;
	}
	

}
