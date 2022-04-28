#include <bits/stdc++.h>
#define REPN(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) REPN(i,0,n)
#define dbg(x)cout<<#x<<"="<<x<<endl
#define S(n) scanf("%d\n",&n)
#define SC(n) scanf("%d",&n)
#define S2(n,m) scanf("%d %d\n",&n,&m)
#define SC2(n,m) scanf("%d %d",&n,&m)
#define ll long long
using namespace std;
ll C[101][101];
int main(){
  REP(i,21){
    C[i][0]=C[i][i]=1;
  }
  REPN(n,1,21){
    REPN(k,1,21){
      C[n][k]=C[n-1][k-1]+C[n-1][k];
    }
  }
  REPN(n,0,21){
    REPN(k,0,21){

      printf("%lld ",C[n][k]%2);
    }
    putchar('\n');
  }
  return 0;
}
