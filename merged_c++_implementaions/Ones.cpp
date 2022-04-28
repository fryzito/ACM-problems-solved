#include <cstdio>
using namespace std;
int main() {
  int n;
  while(scanf("%d",&n)==1) {
    int numero = 1, contador = 1;
    while(numero % n != 0) {
      numero = (numero*10 + 1)%n;
      contador++;
    }
    printf("%d\n",contador);
  }
  return 0;
}
