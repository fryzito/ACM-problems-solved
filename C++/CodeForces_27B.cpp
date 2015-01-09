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
#define MAXN 102
using namespace std;
bool visit[MAXN];
vector<int> G[MAXN];
int maxlvl=0;
int maxnodo=0;
bool win1=0,win2=0;
bool goal=0;
void DFS(int nodo,int hijo){
  if(goal) return;
  if(!visit[nodo]){
    visit[nodo]=1;
    // hallar
    if(nodo==hijo){
      win1=1;
      goal =1;
      return;
    }
    REP(i,G[nodo].size()){
      DFS(G[nodo][i],hijo);
    }
  }
}
int main(){
  int n,m,b,e;
  scanf("%d\n",&n);
  m = n*(n-1)/2 - 1;
  map<int,int> mapa;
  map<int,int>::iterator it;
  while(m--){
    scanf("%d %d\n",&b,&e);
    G[b].pb(e);
    mapa[b]++;
    mapa[e]++;
  }
  int r1,r2;
  vector<int> lis;
  for(it=mapa.begin();it!=mapa.end();it++) {
    // dbg2((*it).f,(*it).s);
    if((*it).s==n-2)
      lis.pb((*it).f);
  }
  r1 = lis[0];
  r2 = lis[1];
  DFS(r1,r2);
  if(win1)
    printf("%d %d\n",r1,r2);
  else
    printf("%d %d\n",r2,r1);
  return 0;
}
