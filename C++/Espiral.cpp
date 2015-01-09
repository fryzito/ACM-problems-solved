#include <iostrem>
#include <cstdio>

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
	int m = 0;
	int n = 0;
	int p = 0;
	for(int a=0+m;a<columna;a++){
		Matriz[p][a] = valor;
		valor++;		
	}
		for(int b=1+m;b<filas;b++){
			matriz[b][a]=valor;
			valor++
		}
		for(int c=columna-2-m;c<n;c++){
			matriz[b][c]=valor;
			valor++
		}
		for(int d=fila-2-m;d<n;d++){
			matriz[d][c]=valor;
			valor++
		}
		/*m++;
		n++;
		p++;
		fila--;
		columna--;*/
	
	
	/*mostrar la matriz ordenada*/
	for(int n=0;n<fila;n++){
	for(int m=0;m<columna;m++){
		cout<<matriz[n][m]<< " ";
	
	}
	cout<<""<<endl;

}