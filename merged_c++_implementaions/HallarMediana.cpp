#include<cstdio>
#include<iostream>
#define n 10
using namespace std;
vector<int> b;
int rank;
//agregar los elementos i la mediana devolviendo el rank
void HcerAray(int a, int mediana, int &rank){
	for(int i = 0; i < n; i++){
		if(a[i] < mediana)
			b.push_back(a[i]);
	}
	c.push_back(mediana);
	for(int j = 0; j < n; j++){
		if(a[i] > mediana)
			b.push_back(a[j]);
	}
}
int HallarMediana(int a[], int p, int q, int posmediana){
	if(p == q){
		return a[p];
	}
	else{
		int r = (p+q)/2;
		HcerAray(a,a[r],rank);
		if(rank == posmediana)
			return a[rank];
		if(rank > r)
		//busqueda en la primera mitad  val mediana (A,P,(P+Q)/2 -1) pas mediana
		else
			//valmediana(A,(p+q)+1,q)
		
	}
}
int main(){
	int array[n];
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	int solucion = HallarMediana(int a[], int p, int q, int posmediana);
	cout << solucion;
}
