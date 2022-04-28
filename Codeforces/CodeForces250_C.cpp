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
#define MAXN 1003
using namespace std;
int n,m,nro,x,y;
int G[MAXN][MAXN];
int A[MAXN];
int main(){
  S2(n,m);
  vector<pair<int,int> > values;
  REP(i,n){
    SC(nro); A[i]=nro;
    values.pb(mp(nro,i));
  }
  while(m--){
    S2(x,y);
    G[x-1][y-1]=1;
    G[y-1][x-1]=1;
  }
  sort(RALL(values));
  int rpta=0;
  REP(i,values.size()){
    REP(j,n){
      if(G[values[i].s][j]==1){
	rpta+=A[j];
	G[values[i].s][j]=0;
	G[j][values[i].s]=0;
      }
    }
  }
  P(rpta);
  return 0;	
}
