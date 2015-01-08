#include <cstdio>
#include <vector>
using namespace std;
#define MAXN 31622779
int sieve[MAXN+1];//Iniciar con 0's
int primes[MAXN+1];
int primesCount=1;
int main(){
  for(int i=2;i<=MAXN;i++) {
    if(!sieve[i]) {
      primes[primesCount]=i;
      sieve[i]=primesCount;
      primesCount++;
    }
    for(int j=1;j<=sieve[i]&&i*primes[j]<=MAXN;j++) {
      sieve[i*primes[j]]=j;
    }
  }
  // el primer primo comienza de 1
  //i es el primo si primes[sieve[i]]==i, y compuesto si no.
  puts("\nprimes:");
  for(int i=0;i<20;i++){
    printf("%d ",primes[i]);
  }
  printf("\nsieve:\n");
  for(int i=0;i<20;i++){
    printf("%d ",sieve[i]);
  }
  return 0;
}
