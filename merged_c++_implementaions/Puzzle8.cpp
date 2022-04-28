#include <istream>
#include <cstdio>
#include <vector>
#include <stddef.h>
using namespace std;
int i,j;

struct nodo {
	int p[3][3];
};

typedef vector<nodo> VN;

bool EsAceptable (nodo n) {
	nodo aux;
	aux = n;
	while (aux != NULL) {
	}
}
void Duplicar(nodo n1, nodo n2) {
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			n2.p[i][j] = n1.p[i][j];
	n2 = n1;
	// falta si n2 != vacio;
}
void Copiar(nodo n1, nodo n2) {
	nodo nuevo;
	Duplicar(n1,nuevo);
	for(int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			n2.p[i][j] = n1.p[i][j];
	n2 = nuevo;
}
void BuscarHueco(nodo n) {
	for(int a = 0; a < 3; a++)
		for(int b = 0; b< 3; b++)
			if(n.p[a][b] == 0) {
				i = a; j = b;
			}
	return;
}
int Expandir(nodo n, VN hijos) {
	int i, j, nroHijos;
	nodo P;
	BuscarHueco(n);
	nroHijos = 0;
	
	if(i<3) {  // Abajo
		nroHijos++;
		Copiar(n,P);
		P.p[i][j] = P.p[i+1][j]; P.p[i+1][j] = 0;
		hijos.push_back(P);
	}
	if(j<3) {  // Derecha
		nroHijos++;
		Copiar(n,P);
		P.p[i][j] = P.p[i][j+1]; P.p[i][j+1] = 0;
		hijos.push_back(P);
	}
	if(j-1 >= 0) { // Arriba
		nroHijos++;
		Copiar(n,P);
		P.p[i][j] = P.p[i-1][j]; P.p[i-1][j] = 0;
		hijos.push_back(P);
	}
	if(i-1 >= 0) { // Izquierda
		nroHijos++;
		Copiar(n,P);
		P.p[i][j] = P.p[i][j-1]; P.p[i][j-1] = 0;
		hijos.push_back(P);
	}
	
	return nroHijos;
}

void NodoInicial() {
	nodo x;
	x.p[0][0] = 1; x.p[0][1] = 5; x.p[0][2] = 2;
	x.p[1][0] = 4; x.p[1][1] = 3; x.p[1][2] = 0;
	x.p[2][0] = 7; x.p[2][1] = 8; x.p[2][2] = 6;
	return;
}

int main() {
	
	return 0;
}

