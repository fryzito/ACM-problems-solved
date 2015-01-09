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
#define MAXN 20004
using namespace std;
int n,m,q,nro;
bool A[11][MAXN];
int F[MAXN],canales[11],R[MAXN];
int x,y;
int main(){
  scanf("%d %d %d\n",&n,&m,&q);
  REPN(i,1,n+1){
    REPN(j,1,m+1){
      SC(nro);
      A[j][i] = nro;
    }
  }
  
  while(q--){
    S2(x,y);
    F[x]++;
    canales[y]++;
  }
  // REPN(i,1,m+1){
  //   printf("%d ",canales[i]);
  // }
  // putchar('\n');
  // REPN(i,1,n+1){
  //   printf("%d ",F[i]);
  // }
  // putchar('\n');
  
  REPN(i,1,m+1){
    REPN(j,1,n+1){
      if(A[i][j]) {
	R[j]+=canales[i];
      }
    }
  }

  // REPN(i,1,n+1){
  //   printf("%d ",R[i]); 
  // }
  // putchar('\n');
  REPN(i,1,n+1){
    if(F[i]) {
      R[i]-=F[i];
    }
    if(i==n)
      printf("%d\n",R[i]);
    else
      printf("%d ",R[i]);
  }
  
  return 0;	
}
