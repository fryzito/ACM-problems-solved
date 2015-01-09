#include <cstdio>
#include <map>
#include <iostream>
using namespace std;
#define MAXN 1000006
#define dbg(x)cout<<#x<<"="<<x<<endl
#define ll long long
#define s second
#define f first
int primes[MAXN+1];
int sieve[MAXN+1];
int primesCount=1;
int main(){
  for(int i=2;i<=MAXN;i++){
    if(!sieve[i]) {
      primes[primesCount]=i;
      sieve[i]=primesCount;
      primesCount++;
    }
    for(int j=1;j<=sieve[i]&&i*primes[j]<=MAXN;j++)
      sieve[i*primes[j]]=j;
  }
  // for(int i=0;i<20;i++)
  //   printf("%d ",primes[sieve[i]]);
  // numero de divisores
  ll nro=999999;
  map<int,int> mapa;
  int div=primes[sieve[nro]];
  while(primes[sieve[nro]]!=nro){
    printf("%d\n",div);
    mapa[div]++;
    nro/=div;
    div=primes[sieve[nro]];
  }
  if(nro!=1LL) {printf("%lld\n",nro);mapa[nro]++;}
  ll nrodiv=1;
  for(map<int,int>::iterator it=mapa.begin();it!=mapa.end();it++) {
    nrodiv*=((*it).s+1);
  }
  printf("numero div: %lld\n",nrodiv);
  return 0;
}
