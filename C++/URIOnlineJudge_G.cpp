#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define REPR(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define EPS (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define dbg3(x,y,z)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define S(x)scanf("%d\n",&x)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MOD 100007
#define MAXN 2000006
using namespace std;
int primes[MAXN+1];
int sieve[MAXN+1];
int rpta[MAXN+1];
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
  ll nro;
  REPN(i,2,MAXN){
    nro=i;
    ll ans=1;
    int aux1;
    while(primes[sieve[nro]]!=nro){
      aux1=primes[sieve[nro]];
      //      dbg2(aux1,nro);
      int power=0;
      while(aux1==primes[sieve[nro]]){power++;nro/=aux1;}
      ans*=(power+1);
      if(nro==1)break;
    }
    if(nro != 1) ans *= 2;
    //if(i<13) dbg(ans);

    if(ans==primes[sieve[ans]])
      rpta[i]=rpta[i-1]+1;
    else
      rpta[i]=rpta[i-1];
    //    printf("numero div de %d es: %lld\n",i,nrodiv);
  }
  int n;
  while(S(n)==1){
    printf("%d\n",rpta[n]);
  }
  return 0;
}
