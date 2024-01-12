#include<iostream> 
#include<cstdio> 
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define dbg3(x,y,z)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define MAX 10010 
using namespace std; 
int cribo[MAX + 1]; 
int primos[MAX + 1]; 
int n_primos = 0; 

// inicializar la criba
void init_cribo() { 
    for (int i = 2; i <= MAX; i++) {
        if(!cribo[i]) {
            primos[n_primos++] = i;
            for (int j = i; i* j <= MAX; j++)
                cribo[i*j] = 1;
        } 
    } 
}
// Hallar el numero de divisores de un numero
int ND(int n) { 
  if(n == 1) return 1; 
  if (n <= MAX && !cribo[n]) return 2;
  int r = 1; int j;
  for (int i = 0; primos[i]*primos[i] <= n; i++) { 
    j = 0; 
    while((n % primos[i]) == 0) { 
      n /= primos[i]; 
      j++; 
    } 
    r *= j + 1; 
  }
  if (n != 1 ) { 
    r *= 2; 
  } 
  return r; 
}     

// saber si un numero es primo
bool es_primo(int n) { 
    if(n == 1) return false; 
    if(n <= MAX && !cribo[n]) return true; 
    for (int i = 0; primos[i] * primos[i] <= n; i++) { 
        if(n % primos[i] == 0)  return false; 
    } 
    return true; 
}

int main() { 
    int n, a , b; 
    init_cribo(); 
    for(int i=0; i< 100; i++){

	    dbg3(i,primos[i],cribo[i]);

    }
    dbg(n_primos);
}
