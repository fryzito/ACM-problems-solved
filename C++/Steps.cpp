#include <cstdio>
#include <iostream>
#define dbg(x) cout << #x << " = " << x << endl
#define lli long long
using namespace std;
lli A[1000];
int main() {
  int nc;
  lli m, n, diferencia;
  scanf("%d",&nc);  
  while(nc--) {
    scanf("%lld %lld",&m,&n);
    diferencia = n-m;
    int steps = 0, suma = 0, contador = 1, veces=0;
    if(n != 0) {
      while(suma < diferencia) {
	if(veces == 2) {veces = 0; contador++;}
	suma += contador;
	veces++;
	steps++;
      }
    }
    printf("%d\n",steps);
  }
  return 0;
}
