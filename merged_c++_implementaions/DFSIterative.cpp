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
int n,m,b,e;
vi G[MAXN];
int main(){
  S2(n,m);
  while(m--){
    S2(b,e);
    G[b].pb(e);
    G[e].pb(b);
  }
  // Recorrer el grafo con DFS
  vi visit(n,0);
  // Empesamos en el nodo 0
  visit[0]=1;
  stack<int> S;
  REP(i,G[0].size()){
    S.push(G[0][i]);
  }
  while(!S.empty()){
    int vertex=S.top();S.pop();
    if(!visit[vertex]){
      visit[vertex]=1;
      dbg(vertex);
      REP(j,G[vertex].size()){
	if(!visit[G[vertex][j]]){
	  S.push(G[vertex][j]);
	}
      }
    }
  }
  
  return 0;	
}
