#include "cuda_runtime.h" 
#include "device_launch_parameters.h" 
#include <stdio.h> 
#include <stdlib.h> 

__global__ void helloworld()  
{  
 printf("Hola Mundo..! Soy el hilo con id bloque: {%d %d}, id de hilo{ %d %d %d }\n", blockIdx.x, blockIdx.y, threadIdx.x, threadIdx.y, 
          threadIdx.z);  
} 

int main() { 
    dim3 threads(1, 2, 4); //--nro de hilos por bloque 
    dim3 grid(2, 1); //--nro de bloques por grid 
    helloworld <<< grid, threads >>> (); //--se define un hilo por bloque 
    return 0; 
}