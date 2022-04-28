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
#define SS(str)scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 52
using namespace std;
int n,m,nc,A[MAXN][MAXN],dp[MAXN][MAXN];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int go(int x,int y){
  if(dp[x][y]!=-1) return dp[x][y];
  int i,j;
  int eshoja=1,ans=0;
  REP(k,4){
    i=dx[k]+x;
    j=dy[k]+y;
    if(0<=i && i<n && 0<=j && j<m){
      if(A[x][y]>A[i][j]){
	ans+=go(i,j);
	eshoja=0;
      }
    }
  }
  if(eshoja) return dp[x][y]=1;
  else return dp[x][y]=ans;
}
bool ismaximal(int i,int j){
  int x,y;
  REP(k,4){
    x=i+dx[k];
    y=j+dy[k];
    if(0<=x && x<n && 0<=y && y<m){
      if(A[i][j]<A[x][y])
	return 0;
    }    
  }
  return 1;
}
int main(){
  int cases=0;
  S(nc);
  while(nc--){
    S2(n,m);
    REP(i,n){
      REP(j,m){
	SC(A[i][j]);
      }
    }
    CLR(dp,-1);
    int ans=0;
    REP(i,n){
      REP(j,m){
	if(ismaximal(i,j)){
	  ans+=go(i,j);
	}
      }
    }
    printf("Case #%d: %d\n",++cases,ans);
  }
  return 0;
}
