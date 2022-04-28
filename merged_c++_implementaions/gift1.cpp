/*
ID: wildr.11
LANG: C++
TASK: gift1
*/
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int busqueda(string biblioteca[] ,int k,string elemento, int cantidad){
	while (k < cantidad )
    {
        if (biblioteca[k] == elemento)
            return k;
        else
            return   k = busqueda(biblioteca, k + 1, elemento,cantidad);
    }
    return -1;
	
}

void LlenandoMatrix(string lista[],int *monedero,int cantidad,int n)
{
	int dinero;	
	int pers;
	int ID,id;
	string donador;	
	string receptor;
	 for(int i=n;i<cantidad;i++)
	{	
		cin >> donador;		
		scanf("%d %d", &dinero, &pers);		
		
			if(pers == 0)
			{
				n = i+1;
				LlenandoMatrix(lista,(int*)monedero,cantidad,n);
				break;
			}
			else
			{		
				int mod = dinero % pers;		
				ID = busqueda(lista,0,donador,cantidad);
				for(int h=0;h< pers;h++)
				{
					int aux=(int)dinero / pers;
					cin >> receptor;                 
					id = busqueda(lista,0,receptor,cantidad);  
					monedero[id*cantidad+ID] += aux;
					aux =0;
				}
			monedero[ID*cantidad+ID] += mod;
			mod = 0;
			}
		
	
	}
}

int main(){

	freopen("gift1.in", "r", stdin);
	freopen("gift1.out", "w", stdout);
	int n = 0;
	int cantidad;
	string nombre;	
	cin>>cantidad;
	string lista[cantidad];
	for(int i=0;i<cantidad;i++){
		cin>>nombre;
		lista[i] = nombre;
	}
	
	int monedero[cantidad][cantidad];
	for(int z = 0; z < cantidad;z++)
	{
		for(int y=0;y<cantidad;y++)
		{
			monedero[z][y] = 0;
		}
	}
	
	LlenandoMatrix(lista,(int*)monedero,cantidad,n);
	int resultados[cantidad];
	int acumulador = 0;	
		for(int w=0;w<cantidad;w++)
		{
			for(int t=0;t<cantidad;t++)
			{
				acumulador = acumulador+(monedero[w][t]-monedero[t][w]);
			}
			resultados[w] = acumulador;
			acumulador = 0;
			
		}
		for(int s=0; s<cantidad;s++)
			cout<<lista[s]<<" "<<resultados[s]<<"\n";	
		
}
