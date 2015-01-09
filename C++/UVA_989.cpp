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
#define MAXN 10
using namespace std;
int A[MAXN][MAXN];
int nro,n;
bool goal;
bool usedbox(int inii,int inij,int num){
  REP(i,nro){
    REP(j,nro){
      if(A[inii+i][inij+j]==num) return 1;
    }
  }
  return 0;
}
bool usedrow(int i,int j,int num){
  REP(k,n){
    if(A[i][k]==num) return 1;
  }
  return 0;
}
bool usedcol(int i,int j,int num){
  REP(k,n){
    if(A[k][j]==num) return 1;
  }
  return 0;  
}
bool estalibre(int i,int j,int num){
  return (!usedrow(i,j,num)&&!usedcol(i,j,num)&&!usedbox(i-i%nro,j-j%nro,num));
}
bool find0(int &i,int &j){
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(A[i][j]==0) return 1;
    }
  }
  return 0;
}
void solve(){
  int i,j;
  if(!find0(i,j)){
    goal=1;
    return;
  }
  for(int k=1;k<=n;k++){
    if(estalibre(i,j,k)){
      A[i][j]=k;
      solve();
      if(goal) return;
      A[i][j]=0;
    }
  }
  return;
}
int main(){
  bool primero=1;
  while(S(nro)==1){
    if(!primero) putchar('\n');
    primero=0;
    n=nro*nro;
    REP(i,n){
      REP(j,n){
	SC(A[i][j]);
      }
    }
    goal=0;
    solve();
    if(!goal) {printf("NO SOLUTION\n");return 0;}
    REP(i,n){
      REP(j,n){
	printf("%d%c",A[i][j],char(j==n-1?10:32));
      }
    }
  }
  return 0;
}
