#include <stdio.h>
#include <stdlib.h>
#include <math.h> // para sqrt

#define MAXN 100

int main(){

    // leer matriz
    int n, m;
    int* matriz = (int*)malloc(MAXN*MAXN*sizeof(int));
    
    printf("Ingrese la  dimension de la matriz: ");
    scanf("%d %d", &n, &m);

    // generar valores constantes para la matriz
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            matriz[i * m + j] = i+j;
        }
    }
    // escribir matriz
    printf("La matriz es:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", matriz[i * m + j]);
        }
        putchar('\n');
    }

    // hallar norma
    double norma = 0.0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            norma += matriz[i * m + j] * matriz[i * m + j];
        }
    }

    norma = sqrt(norma);

    // escribir resultado
    printf("La norma de Frobenius de la matriz es: %.2f\n", norma);
    free(matriz);

    return 0;
}