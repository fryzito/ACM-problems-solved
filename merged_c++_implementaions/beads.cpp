/*
ID: wildr.11
LANG: C++
TASK: beads
*/
#include <cstdio>
#include <iostream>

using namespace std;
int RecorrerIzq(int n, int k);
int RecorrerDer(int n, int k);
void ContarIzquierda(string cadena,int k, int &contador,int n,int stable);
void ContarDerecha(string cadena,int k, int &contador1,int n,int stable);

int RecorrerIzq(int n, int k) {
	if((k-1)< 0)
		return (k-1)+n;
	else
		return k -1;
}
 
int RecorrerDer(int n, int k) {
	if((k+1)>= n)
		return (k+1)%n;
	else
		return k +1;
}
int ContarIzquierda(string cadena,int k,int n,int stable) {
	if(cadena[stable] == cadena[RecorrerIzq(n,k)] || cadena[RecorrerIzq(n,k)] == 'w') {
	    return ContarIzquierda(cadena,RecorrerIzq(n,k),n,stable)+1;
	}else
		return 1;
}
int ContarDerecha(string cadena,int k,int n,int stable) {
	if(cadena[stable] == cadena[RecorrerDer(n,k)] || cadena[RecorrerDer(n,k)] == 'w') {
	    return ContarDerecha(cadena,RecorrerDer(n,k),n,stable)+1;
	}
	else
		return 1;
}
int main() {
	freopen("beads.in" , "r" , stdin);
	freopen("beads.out" , "w" , stdout);	
	string cadena;
	int n,bolitas;
	int contador1;
	int contador = 0;
	int mayor = 0;
	int indisador=0;
	cin>>n;
	cin>>cadena;
	while((mayor == 0) && (indisador < n)) {
		indisador= indisador + 1;
		for(int k = 0; k < n;k++) {
			if((cadena[k]=='r' && cadena[k+indisador]=='b')||(cadena[k] == 'b' && cadena[k+indisador] == 'r')) {
				contador1 = ContarDerecha(cadena,k+indisador,n,k+indisador);
				contador = ContarIzquierda(cadena,k,n,k);
				bolitas = contador+contador1+(indisador-1);
				if(mayor < bolitas) mayor = bolitas;
			}
		}	
	}
	if(mayor == 0) {
		cout<<n<<"\n";
	}
	else {
		if(mayor>n)
			cout<<n<<"\n";
		else
			cout<<mayor<<"\n";
	}		
}
