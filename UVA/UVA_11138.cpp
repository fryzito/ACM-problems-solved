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
#define MAXN 502
using namespace std;
int nc,n,m,nro,maxmatch=0,cases;
vector<int> G[MAXN];
vi visit,matchs;
int Aug(int l){
  if(visit[l]) return 0;
  visit[l]=1;
  // Recorrer todos los adjacentes
  REP(j,G[l].size()){
    int r = G[l][j];
    if(matchs[r]==-1 || Aug(matchs[r])){
      matchs[r] = l;
      return 1;
    } 
  }
  return 0;
}
int main(){
  S(nc); cases=0;
  while(nc--){
    // limpiar grafo
    S2(n,m);
    REP(i,n){G[i].clear();}
    
    REP(i,n){
      REP(j,m){
	SC(nro);
	if(nro){
	  G[i].pb(j);
	}
      }
    }

    matchs.assign(n+m,-1);
    maxmatch=0;
    REP(i,n){
      visit.assign(n,0);
      maxmatch+=Aug(i);
    }
    printf("Case %d: a maximum of %d nuts and bolts can be fitted together\n",++cases,maxmatch);
  }
  return 0;	
}
