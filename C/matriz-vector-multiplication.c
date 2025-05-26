#include <stdio.h>
#include <stdlib.h>

#define MAXN 100

// matriz
void leerMatriz(int *A, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &A[i*m + j]);
        }
    }
    return;
}

void escribirMatriz(int* A, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", A[i*m + j]);
        }
        putchar('\n');
    }
    return;
}

// vector
void leerVector(int* v, int m){
    for(int i=0;i<m;i++){
        scanf("%d", &v[i]);
    }
    return;
}

void escribirVector(int* v, int m){
    for(int i=0;i<m;i++){
        printf("%d ", v[i]);
    }
    putchar('\n');
    return;
}

void multiplicarMatrizVector(int* A, int* v, int n, int m, int* res){
    for(int i=0;i<n;i++){
        res[i]=0;
        for(int j=0;j<m;j++){
            res[i]+=A[i*m + j]*v[j];
        }
    }
    return;
}

int main(){

    int n,m,k;

    printf("La dimension de la matriz es: ");
    scanf("%d %d", &n,&m);
    printf("%d %d\n", n, m);
    //Leer matriz
    int* A = (int*)malloc(MAXN*MAXN*sizeof(int));

    printf("%d\n",A[0]);

    leerMatriz(A, n, m);
    // Escribir matriz
    escribirMatriz(A, n, m);
    
    
    printf("La dimension del vector es: ");
    scanf("%d\n", &k);
    printf("%d\n", k);
    // Leer vector
    int* v = (int*)malloc(k*sizeof(int));
    leerVector(v, k);
    //Escribir vector
    printf("El vector es: ");
    escribirVector(v, k);

    int * res = (int*)malloc(MAXN*sizeof(int));

    // Multiplicar matriz 
    // condicion del problema m = k
    multiplicarMatrizVector(A, v, n, m, res);
    // Escribir resultado
    escribirMatriz(res, 1, n); // en realidad es nx1 dimension

    // Liberar memoria
    free(A);
    free(v);
    free(res);

    return 0;
}