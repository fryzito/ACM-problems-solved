#include <stdio.h>

#define SIZE 5

void multiplication(int* A, int* B, int* C){
    int i,j,k;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            C[i*SIZE+j]=0;
            for(k=0;k<SIZE;k++){
                C[i*SIZE+j]+=A[i*SIZE+k]*B[k*SIZE+j];
            }
        }
    }
    return;
}

int main() {
    int n,m,suma;
    // Leer matrices
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            A[i][j]=2;
            B[i][j]=3;
        }
    }

    // Multiplicar matrices
    multiplication((int *)A, (int *)B, (int *)C);

    // Imprimir matriz resultante
    printf("Matriz resultante:\n");
    
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}