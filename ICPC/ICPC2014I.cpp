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
#define SS(str)scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 100005
using namespace std;
int n,m,b,e,w,pesos[MAXN],nro,fr[MAXN];
vector<ii> G[MAXN];
set<int> setp;
int DFS(int x,int &sum){
  int ans=0,aux;
  REP(k,G[x].size()){
    aux=sum;
   ans+=DFS(G[x][k].f,aux);
   aux+=
  }
  if(!ans&&setp.find(x)!=setp.end()) {
    pesos[x]=sum;
  } else {
    pesos[x]=0;
  }
  return (setp.find(x)!=setp.end());
}
int main(){
  while(S2(n,m)==2){
    int aristas=n-1;
    fill(G,G+n+1,vector<ii>());
    while(aristas--){
      scanf("%d %d %d\n",&b,&e,&w);
      G[b].pb(mp(e,w));
    }
    setp.clear();
    REP(i,m){
      SC(fr[i]);
      setp.insert(fr[i]);
    }
    DFS(1,0);
    int maxi=-INF;
    int ans=0;
    REP(j,n+1){
      printf("%d%c",pesos[j],char(j==n?10:32));
    }
    REP(i,m){
      nro=fr[i];
      ans+=pesos[nro];
      if(maxi<pesos[nro])
	maxi=pesos[nro]; 
    }
    P(ans-maxi);
  }
  return 0;
}
