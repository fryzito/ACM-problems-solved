#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <mpi.h>

#define MAXN 100

int main(int argc, char *argv[]) {
    int n, m;
    int *matriz = NULL;
    int *submatriz = NULL;
    int rank, size;
    int filas_por_proceso;
    double suma_local = 0.0, suma_total = 0.0, norma = 0.0;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    if (rank == 0) {
        printf("Ingrese la dimension de la matriz (n n): ");
        scanf("%d %d", &n, &m);

        if (n != m) {
            printf("Error: Solo se permite matrices cuadradas (n = m).\n");
            MPI_Abort(MPI_COMM_WORLD, 1);
        }
        if (n % size != 0) {
            printf("Error: n debe ser divisible por el numero de procesos.\n");
            MPI_Abort(MPI_COMM_WORLD, 1);
        }

        matriz = (int *)malloc(n * n * sizeof(int));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matriz[i * n + j] = i + j;
            }
        }
        printf("La matriz es:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", matriz[i * n + j]);
            }
            putchar('\n');
        }
    }

    // Broadcast de n a todos los procesos
    MPI_Bcast(&n, 1, MPI_INT, 0, MPI_COMM_WORLD);

    filas_por_proceso = n / size;
    submatriz = (int *)malloc(filas_por_proceso * n * sizeof(int));

    // Distribuir las filas de la matriz
    MPI_Scatter(matriz, filas_por_proceso * n, MPI_INT,
                submatriz, filas_por_proceso * n, MPI_INT,
                0, MPI_COMM_WORLD);

    // Calcular suma local de los cuadrados
    for (int i = 0; i < filas_por_proceso; i++) {
        for (int j = 0; j < n; j++) {
            int val = submatriz[i * n + j];
            suma_local += val * val;
        }
    }

    // Reducir la suma local a la suma total en el proceso 0
    MPI_Reduce(&suma_local, &suma_total, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);

    if (rank == 0) {
        norma = sqrt(suma_total);
        printf("La norma de Frobenius de la matriz es: %.2f\n", norma);
        free(matriz);
    }

    free(submatriz);
    MPI_Finalize();
    return 0;
}