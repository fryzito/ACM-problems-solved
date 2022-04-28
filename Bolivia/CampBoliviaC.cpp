#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<cstring>
#include<algorithm>
#include<sstream>
#define ll long long
#define VI vector<int>
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define REPR(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define eps (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 1003
using namespace std;
bool A[MAXN][MAXN];
int main(){
  int nc,n,m,y,x;S(nc);
  while(nc--){
    scanf("\n%d %d\n",&n,&m);

    CLR(A,0);

    while(m--){
      scanf("%d %d\n",&x,&y);      
      A[n-y][x-1]=1;

    }

    int contVer=0;
    REP(i,n){
      int cont=0;
      REP(j,n){
	if(A[i][j])
	  cont++;
      }
      if(cont==n) contVer++;
    }

    int contHor=0;
    REP(i,n){
      int cont=0;
      REP(j,n){
	if(A[j][i])
	  cont++;
      }
      if(cont==n) contHor++;
    }

    printf("%d\n",contVer+contHor);

  }
  return 0;	
}
