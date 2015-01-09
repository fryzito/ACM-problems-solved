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
#define MAXN 103
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int n,m,nro;
bool R[MAXN][MAXN],A[MAXN][MAXN];
int main(){
  S2(n,m);
  CLR(R,1);
  REP(i,n){
    REP(j,m){
      scanf("%d",&nro);
      A[i][j]=nro;
      if(!nro){
	REP(k,n){
	  R[k][j]=0;
	}
	REP(k,m){
	  R[i][k]=0;
	}
      }
    }
  }
  bool goal=1,isone,isone2;
  REP(i,n){
    REP(j,m){
      if(A[i][j]){
	isone=0,isone2=0;
	REP(k,n){
	  if(R[k][j]==1){
	    isone=1;
	    break;
	  }
	}
	REP(k,m){
	  if(R[i][k]==1){
	    isone2=1;
	    break;
	  }
	}
	if(isone==0&&isone2==0){
	  goal=0;
	  break;
	}
      }
    }
  }
  if(goal){
    printf("YES\n");
    REP(i,n){
      REP(j,m){
	printf("%d%c",R[i][j],j==m-1?10:32);
      }
    }
  } else {
    printf("NO\n");
  }
  return 0;
}
