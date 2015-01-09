#include <cstdio>
#include <iostream>
using namespace std;
#define MAXN 1000006
#define dbg(x)cout<<#x<<"="<<x<<endl
#define MOD 1000000007
pair<int,int> par;
long long A[MAXN];
long long sum[MAXN];
long long pow2(long long b,int e){
  long long r=1;
  while(e){
    if(e&1)
      r = ((r%MOD)*(b%MOD))%MOD;
    b = ((b%MOD)*(b%MOD))%MOD;
    e>>=1;
  }
  return r%MOD;
}
int main(){
  int n;scanf("%d\n",&n);
  int m;
  while(n--){
    scanf("%d\n",&m);
    if(m==1) printf("1\n");
    else
      printf("%lld\n",((m+1LL)*pow2(2,m-2))%MOD);
  }
  return 0;
}
