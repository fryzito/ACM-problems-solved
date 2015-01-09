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
int n,m;
vi match,vis;
vector<vi> G;
int Aug(int l){
  if(vis[l]) return 0;
  vis[l]=1;
  for (int j=0;j<(int)G[l].size();j++){
    int r=G[l][j];
    if(match[r] == -1 || Aug(match[r])){
      match[r] = l; return 1;
    }
  }
  return 0;
}
int main(){
  while(S2(n,m)==2,n||m){
    G.assign(n,vi());
    int nro,aux;
    REP(i,n){
      SC(nro);
      REP(j,nro){
	SC(aux);
	G[i].pb(aux);
      }
    }
    int Machets=0;
    match.assign(n+m,-1);
    for(int l=0;l<n;l++){
      vis.assign(n,0);
      Machets+=Aug(l);
    }
    P(Machets);
    scanf("\n");
  }
  return 0;	
}
