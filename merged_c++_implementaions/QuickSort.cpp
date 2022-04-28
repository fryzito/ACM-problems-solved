#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int colocar(int *v, int b, int t) {
    int i;
    int pivote, valor_pivote;
    int temp;
 
    pivote = b;
    valor_pivote = v[pivote];
    for (i=b+1; i<=t; i++){
        if (v[i] < valor_pivote){
                 pivote++;
                temp=v[i];
                v[i]=v[pivote];
                v[pivote]=temp;
 
        }
    }
    temp=v[b];
    v[b]=v[pivote];
    v[pivote]=temp;
    return pivote;
} 
void Quicksort(int* v, int b, int t) {
     int pivote;
     if(b < t){
        pivote=colocar(v, b, t);
        Quicksort(v, b, pivote-1);
        Quicksort(v, pivote+1, t);
     }
}
int main() {
	int n = 10;
	int A[] = {12,52,665,234,730,68,4,72,68,257};
	Quicksort(A,0,n-1); // ojo con los parametros
	for (int i = 0; i < n; i++) cout << A[i] <<" ";
	cout << endl;
	return 0;
}

