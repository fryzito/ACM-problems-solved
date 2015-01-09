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
int n,m;
int A[MAXN][MAXN];
int dx[8]={0,0,1,-1,-1,-1,1,1};
int dy[8]={1,-1,0,0,-1,1,1,-1};
bool Pico(int i ,int j,int nro){
  if(0<=i&&i<n && 0<=j&&j<m) {
    if(A[i][j]<nro) return 1;
    else return 0;
  }
  return 1;
}
bool isPico(int i,int j,int nro){
  bool goal=1;
  for(int k=0;k<8;k++){
    goal &= Pico(i+dx[k],j+dy[k],nro);
  }
  return goal;
}
int main(){
  while(S2(n,m)==2){
    REP(i,n){
      REP(j,m){
	SC(A[i][j]);
      }
    }
    vector<pair<int,int> > v;
    REP(i,n){
      REP(j,m){
	if(isPico(i,j,A[i][j]))
	  v.pb(mp(i+1,j+1));
      }
    }
    sort(ALL(v));
    REP(i,v.size()){
      printf("%d %d\n",v[i].f,v[i].s);
    }
    if(v.size()==0)
      printf("-1\n");
    printf("\n");
  }
  
  return 0;
}
