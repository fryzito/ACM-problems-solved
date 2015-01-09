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
#define SS(str) scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define f first
#define s second
#define MOD 100007
#define MAXN 422
using namespace std;
char row[22],col[22];
vi G[MAXN+4];
int n,m,M[22][22];
bool used[MAXN+4];
bool existe(int beg,int end){
  if(used[beg]) return 0;
  if(beg==end) return 1;
  bool ans=0;
  used[beg]=1;
  for(int k=0;k<G[beg].size();k++){
    ans|= existe(G[beg][k],end);
  }
  used[beg]=0;
  return ans;
}
int main(){
  S2(n,m);
  SS(row);
  SS(col);
  int size=n*m+22;
  fill(G,G+size,vector<int>());
  int nodocount=1;
  REPN(i,1,n+2){
    REPN(j,1,m+2){
      M[i][j]=nodocount;
      nodocount++;
    }
  }
  // REPN(i,1,n+1){
  //   REPN(j,1,m+1){
  //     printf("%d ",M[i][j]);
  //   }
  //   putchar('\n');
  // }
  vi v;
  REPN(i,1,n+1){
    REPN(j,1,m+1){
      if(row[i-1]=='<')
	G[M[i][j]].pb(M[i][j-1]);
      else
	G[M[i][j]].pb(M[i][j+1]);
      
      if(col[j-1]=='v')
	G[M[i][j]].pb(M[i+1][j]);
      else
	G[M[i][j]].pb(M[i-1][j]);      
      v.pb(M[i][j]);
    }
  }
  
  int vsz  = v.size();   
  // REP(i,v.size()){
  //   dbg(v[i]);                                                      
  //   REP(k,G[v[i]].size()){
  //     printf("%d ",G[v[i]][k]);
  //   }
  //   putchar('\n');
  // }
  bool goal=0;
  for(int i=0;i<vsz&&!goal;i++){
    REPN(j,i+1,vsz){
      // i,j
      // dbg2(v[i],v[j]);
      if(!existe(v[i],v[j]) or !existe(v[j],v[i])){
	goal=1;
	break;
      }
    }
  }
  printf("%s\n",goal?"NO":"YES");
  return 0;
}
