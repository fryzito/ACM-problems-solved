/*
PROG: satpix
LANG: C++
ID: fryzito1
*/
/* problema usaco.bronce "Satpix" (numero mayor de pastisales convexos y adyacentes)*/
#include<iostream>
#include<cstdio>
using namespace std;


 void Recorrer(int x, int y, char *matriz,int filas, int columnas,int& contador){
            if ((y != -1) && (x != -1) && (x != filas) && (y != columnas))
            {
                if ((matriz[x*columnas+y]!= '.'))
                {                    
                    matriz[x*columnas+y] = '.';
                    contador = contador + 1;
                    Recorrer(x + 1, y, matriz,filas,columnas,contador);
                    Recorrer(x, y + 1, matriz,filas,columnas,contador);
                    Recorrer(x - 1, y, matriz,filas,columnas,contador);
                    Recorrer(x, y - 1, matriz,filas,columnas,contador);
                }
            }
}
int main(){
			freopen("satpix.in", "r", stdin);
			freopen("satpix.out", "w", stdout);
            int contador = 0;
            int Mayor = 0;
			int columnas;
			int filas;
            cin>>columnas>>filas;
            char matriz[filas][columnas];
            for (int i = 0; i < filas; i++)
                for (int j = 0; j < columnas;j++ )
                {
                    cin>>matriz[i][j] ;
                }
            // Mostrar matriz
            //recorriendo matrix
            for (int i = 0; i < filas; i++)
                for (int j = 0; j < columnas; j++)
                {
                    if (matriz[i][j]!= '.')
                    {
                        Recorrer(i, j, (char*)matriz,filas,columnas, contador);
                        if (Mayor <= contador)
                            Mayor = contador;
                        contador = 0;
                    }                    
                }
            cout<<Mayor<<"\n";
            
        }
