#include <cstdio>
#include <iostream>
using namespace std;
void Recorrer(int x,int y,int* u,int contador)
{
	int matriz[][];
	matriz =*u;
	if((matriz[x][y]!=0))
	{
		contador += matriz[x][y];
		matriz[x][y]=0;
		Recorrer(x+1,y,matriz,contador);
		Recorrer(x,y+1,matriz,contador);
		Recorrer(x-1,y,matriz,contador);
		Recorrer(x,y-1,matriz,contador);
	}
}
int main()
{
	int filas;
	int columnas;
	cout<<"Ingrese numero de filas : "<<endl;
	cin>>filas;
	cout<<"Ingrese numero de columnas : "<<endl;
	cin>>columnas;
	int matriz [filas][columnas];
	for(int k=0;k<filas;k++)
	{
		for(int h=0;h<columnas;h++)
		{
			matriz[k][h]=rand()%2;	
		}	
	}
	for(int b=0;b<filas;b++)
	{
		for(int g=0;g<columnas;g++)
		{
				matriz[b][g]=rand()%10;	
		}	
		
	}
	//Mostrar matriz
	for(int r=0;r<filas;r++)
	{
		for(int w=0;w<columnas;w++)
		{
			cout<<matriz[r][w]<<" ";				
		}	
		cout<<" "<<endl;		
	}
	cout<<" "<<endl;
	//Empesamos a crear las coordenadas donde el robot
	//emperaza a recolectar basura
	int x;
	int y;
	cout<<"Ingrese coordenadas X = ";
	cin>>x;
	cout<<"Ingrese coordenadas Y =";
	cin>>y;
	int contador = 0;
	int *p;
	p=matriz;
	Recorrer(x,y,p,contador);
	cout<<"El recolector de basura"<<endl;
	cout<<contador;
	
	return 0;
}
