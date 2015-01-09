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
#define S(x)scanf("%d\n",&x)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 2003
#define MOD 1000000000 + 7
using namespace std;
int n,k;
int dp[MAXN][MAXN];
int main(){
  S2(n,k);
  REP(i,n) dp[0][1]=1;
  
  REPN(p,1,k+1){
    REPN(i,1,n+1){
      for(int j=i;j<=n;j+=i){
	dp[p][j]+=dp[p-1][i];
	dp[p][j]%=MOD;
      }
    }
  }
  int sum=0;
  REPN(i,1,n+1){
    sum+=dp[k][i];
    sum%=MOD;
  }
  printf("%d\n",sum);
  // REPN(p,1,k+1){
  //   REPN(i,1,n+1){
  //     printf("%d ",dp[p][i]);
  //   }
  //   putchar('\n');
  // }
  return 0;
}
