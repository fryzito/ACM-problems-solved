#include <cstdio>
#include <iostream>
#define dbg(x) cout << #x << " = " << x << endl
using namespace std;

string str;
int main() {
  int n,m;
  int izqui_numerador,izqui_dnominadr,derec_numerador,derec_dnominadr;
  int numerador, denominador;

  while(scanf("%d %d\n",&n,&m)) {
    if(n==1 && m==1) break;
    str = "";
    if(1.0*(n/m) < 1) {
      izqui_numerador = 0;
      izqui_dnominadr = 1;
      derec_numerador = 1;
      derec_dnominadr = 1;
      str += 'L';
    } else {
      izqui_numerador = 1;
      izqui_dnominadr = 1;
      derec_numerador = 1;
      derec_dnominadr = 0;
      str += 'R';
    }

    numerador = izqui_numerador + derec_numerador;
    denominador = izqui_dnominadr + derec_dnominadr;

    while(numerador != n || denominador != m) {

      if(1.0*n/m < 1.0*numerador/denominador) {
	derec_numerador = numerador;
	derec_dnominadr = denominador;
	str += 'L';
      } else {
	izqui_numerador = numerador;
	izqui_dnominadr = denominador;
	str += 'R';
      }
      numerador = izqui_numerador + derec_numerador;
      denominador = izqui_dnominadr + derec_dnominadr;
    }
    printf("%s\n",str.c_str());
  }
  return 0;
}
