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
#define MAXN 100005
using namespace std;
int n,price,h,w,cost;
int C[20];
int A[20][20];
int main(){
  while(scanf("%d %d %d %d\n",&n,&price,&h,&w)==4){
    REP(l,h){
      S(C[l]);
      REP(i,w){
	SC(A[l][i]);
      }
    }
    int rpta=INF;
    REP(i,h){
      bool entranH=0;
      REP(j,w){
	if(n<=A[i][j]){
	  entranH=1;
	  break;
	}
      }
      if(!entranH) continue;
      if(n*C[i]<=price) {
	rpta=min(rpta,n*C[i]);
      }
    }
    if(rpta==INF) {
      printf("stay home\n");
    } else {
      printf("%d\n",rpta);
    }
  }
  return 0;	
}
