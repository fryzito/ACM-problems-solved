#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include <stdio.h>

__global__ void helloworld() {
    printf("Hola Mundo..! Soy el hilo con id bloque: {%d %d}, id de hilo: { %d %d %d }\n",
    blockIdx.x, blockIdx.y, threadIdx.x, threadIdx.y, threadIdx.z);
}

int main() {
    helloworld<<<1, 1>>>(); // Lanza un hilo
    cudaDeviceSynchronize(); // Espera que el GPU termine antes de salir
    return 0;
}