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
using namespace std;
int nc,n,m,x,y,nro,t,s,path,k;
bool used[MAXN];
bool visit[MAXN];
void DFS(int nodo,int acumulado,vector<int> G[]){
  visit[nodo]=1;
  if(nodo==t) {
    // llegamos a la respuesta
    if(acumulado==k)
      path++;
    return;
  }
  REP(j,G[nodo].size()){
    if(!visit[G[nodo][j]]){
      DFS(G[nodo][j],acumulado+(used[nodo]),G);
    }
  }
}
int main(){
  S(nc);
  while(nc--){
    scanf("\n%d %d\n",&n,&m);
    vector<int> G[n+1];
    CLR(used,0);
    CLR(visit,0);
    while(m--){
      S2(x,y);
      G[x].pb(y);
      G[y].pb(x);
    }
    SC2(s,t);S(k);
    REP(l,k){
      S(nro);
      used[nro]=1;
    }
    path=0;
    DFS(s,0,G);
    P(path);
  }
  return 0;	
}

