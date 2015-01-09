#include<cstdio>
#include<iostream>
using namespace std;
int matriz[100][100];
bool rpta = false;
void mostrar(int n, int m){
	for(int j=0; j< m; j++){
		for(int i=0; i < n; i++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}
void leer(int n,int m){
	for(int j=0; j< m; j++){ 
		for(int i=0; i < n; i++){
			cin >> matriz[i][j];a
		}
	}
}
void recorrer(int x,int y,int n,int m){
	if((x>=0)&&(x<n)&&(y>=0)&&(y<m)){
		if((matriz[x][y]!=1)&&(matriz[x][y]!=2)){
			matriz[x][y]=2;
			if((x==n-1)&&(y==m-1)){
				rpta = true;
				return;
			}
			recorrer(x+1,y,n,m);
			recorrer(x,y+1,n,m);
			recorrer(x-1,y,n,m);
			recorrer(x,y-1,n,m);
		}
	}
} 
int main(){
	int n,m;
	//leer ancho y largo n ,m
	cout << "ingrese numero de columnas "<<endl;
	cin >> n;
	cout << "ingrese numero de filas "<<endl;
	cin >> m;
	leer(n,m);              //leendo el laberinto
	mostrar(n,m); 
	cout << " " << endl;
	recorrer(0,0,n,m);  	//recorrer
	mostrar(n,m);          	//Mostrar  
	if(rpta)
		cout << "   Si encontro salida  !"; 
	else
		cout << "   No encontro salida  !";
} 
