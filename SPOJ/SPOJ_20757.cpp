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
#define P(x)printf("%d\n",x)
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 103
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int n,m,nc,countRpta;
char ch;
int A[MAXN][MAXN],rpta[10];
bool visited[MAXN][MAXN],isnew;
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
void go(int i,int j,int nro){
  if(0<=i && i<n && 0<=j && j<m) {
    if(A[i][j]==nro && !visited[i][j]){
      visited[i][j]=1;
      isnew=1;
      REP(k,8){
	go(i+dx[k],j+dy[k],nro);
      }
    }
  }
  return;
}
int main(){
  int cases=0;
  S(nc);
  while(nc--){
    CLR(rpta,0);
    CLR(visited,0);
    countRpta=0;
    S2(n,m);
    REP(i,n){
      REP(j,m){
	ch=getchar();
	A[i][j]=ch-'0';
      }
      scanf("\n");
    }
    REP(i,n){
      REP(j,m){
	if(A[i][j]==0) continue;
	isnew=0;
	go(i,j,A[i][j]);
	if(isnew){ rpta[A[i][j]]++;countRpta++;}
      }
    }
    printf("Caso #%d: %d\n",++cases,countRpta);
    REPN(k,1,10){
      printf("%d%c",rpta[k],k==9? 10 : 32);
    }
  }
  return 0;
}
