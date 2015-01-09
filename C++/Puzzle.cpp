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
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
struct Puzzle{
  int A[3][3];
  int x,y;
  Puzzle(){}
  void findHueco(){
    REP(i,3){
      REP(j,3){
	if(A[i][j]==0){
	  x=i,y=j;
	}
      }
    }
  }
  void move(int i,int j){
    
  }
};
vector<Puzzle> v;
bool operator ==(Puzzle A,Puzzle B) {
  REP(i,3){
    REP(j,3){
      if(A.A[i][j]!=B.A[i][j]) return 0;
    }
  }
  return 1;
}
void go(Puzzle A){
  // caso base
  if()
    // caso recursivo
    // BuscarHueco
    A.findHueco();
    REP(k,4){
      A.move(A.x+dx[k],A.y+dy[k]);
      go(A);
    }
}
int main(){
  Puzzle A;
  REP(i,3){
    REP(j,3){
      SC(A.A[i][j]);
    }
  }
  go(Puzzle A);
  // escribiendo matriz
  REP(i,3){
    REP(j,3){
      printf("%d ",A.A[i][j]);
    }
    putchar('\n');
  }
  return 0;
}
