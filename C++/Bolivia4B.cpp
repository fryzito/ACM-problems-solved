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
#define MAXN 100005
int A[2][62];
using namespace std;
int nc,n,m;
int main(){
  
  S(nc);
  while(nc--){
    scanf("\n%d %d\n",&n,&m);
    REP(i,n){
      scanf("%d %d\n",&A[0][i],&A[1][i]);
    }
    int aux,sum;
    int rpta=0;
    for(int mask=0;mask<(1<<n);mask++){
      bool esta=0;
      for(int j=0;j<n&& !esta;j++) {
	if(mask&(1<<A[0][j]) and mask&(1<<A[1][j])){
	  esta=1;
	}
      }
      if(!esta){
	rpta=max(__builtin_popcount(mask),rpta);
      }
    }
    printf("%d\n",rpta);
  }
  return 0;	
}
