#include <iostream>
using namespace std;
 
#define N 10 
#define M 20
#define O 25
#define P 40
 
void funcion(int *tabla, int n, int m, int o, int p); 
 
int main() { 
   int Tabla[N][M][O][P];
   
   Tabla[3][4][12][15] = 13;
   cout << "Tabla[3][4][12][15] = " << 
     Tabla[3][4][12][15] << endl;
   funcion((int*)Tabla, N, M, O, P); 
   return 0; 
}
 
void funcion(int *tabla, int n, int m, int o, int p) { 
   cout << "tabla[3][4][12][15] = " <<
     tabla[3*m*o*p+4*o*p+12*p+15] << endl;
}
