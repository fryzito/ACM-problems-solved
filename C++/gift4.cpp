/*
ID: fryzito1
LANG: C++
TASK: gift1
*/
#include <cstdio> 
#include <iostream> 
#include <fstream> 
#define Mostrar(l,n) for(int i=0; i<n; ++i) cout << l[i] <<endl; 
using namespace std; 
int busqueda(string biblioteca[] ,string elemento, int cantidad) 
{ 
        int k=0; 
        while(k < cantidad ) 
        { 
                if (biblioteca[k] == elemento) 
                        return k; 
                ++k; 
        } 
        return -1; // cero no porque podria existir biblioteca[0], -1 = no existe 
} 

int main(){ 
        int cantidad,dinero; 
        string nombre,persona; 
        int pers; 
        int ID,id; 
        string donador; 
        string receptor; 
        string lista[cantidad]; 
        ifstream fin ("gift1.in"); 
        ofstream fout("gift1.out"); 
        fin>>cantidad; 
        for(int i=0;i<cantidad;i++){ 
                fin>>nombre; 
                lista[i] = nombre; 
        } 
        int monedero[cantidad][cantidad]; 
        for(int z = 0; z < cantidad;z++) 
                for(int y=0;y<cantidad;y++) 
                        monedero[y][z] = 0; 
        for(int i=0; i<cantidad; ++i) 
        { 
                fin >> donador; 
                fin >> dinero >> pers; 
                if(pers == 0) 
                        pers = 1; 
                int mod = dinero % pers; 
                int aux=dinero / pers; 
                ID = busqueda(lista,donador,cantidad); 
                for(int h=0;h< pers;h++) 
                { 
                        fin >> receptor; 
                        id = busqueda(lista,receptor,cantidad); 
                        monedero[id][ID] += aux; 
                } 
                monedero[ID][ID] += mod; 
        } 
        int resultados[cantidad]; 
        int acumulador = 0; 
        for(int w=0;w<cantidad;w++) 
        { 
                for(int t=0;t<cantidad;t++) 
                        acumulador = acumulador+(monedero[w][t]-monedero[t][w]); 
                resultados[w] = acumulador; 
                acumulador = 0; 
        } 
        for(int s=0; s<cantidad;s++) 
                fout<<lista[s]<<" "<<resultados[s]<<"\n"; 
			
	return 0;
}
