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
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005 
using namespace std;
bool visit[MAXN];
vector<int> G[MAXN];
int maxlvl=0;
int maxnodo=0;
void DFS(int nodo,int lvl){
  if(!visit[nodo]){
    visit[nodo]=1;
    dbg(nodo);
    if(maxlvl<lvl) {
      maxlvl=lvl;
      maxnodo=nodo;
    }
    REP(i,G[nodo].size()){
      DFS(G[nodo][i],lvl+1);
    }
  }
}
int main(){
  int n,m,b,e;
  scanf("%d %d\n",&n,&m);
  while(m--){
    scanf("%d %d\n",&b,&e);
    G[b].pb(e);
    G[e].pb(b);
  }
  DFS(0,0);
  printf("%d\n",maxlvl);
  printf("%d\n",maxnodo);
  CLR(visit,0);
  maxlvl=0;
  DFS(maxnodo,0);
  printf("%d\n",maxlvl);
  printf("%d\n",maxnodo);
  return 0;
}
