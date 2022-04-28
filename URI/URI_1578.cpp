#include <bits/stdc++.h>
#define ll unsigned long long
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
#define MAXN 4003
using namespace std;
string i2s(ll x) { stringstream ss; ss << x; return ss.str();}
ll s2i(string str) { istringstream ss(str);ll nro; ss >> nro; return nro;}
int nc,n,maxsize,cases,S[21];
ll nro;
string A[21][21],aux;
int main(){
  cases=3;

  S(nc);
  //dbg(nc);
  while(nc--){
    CLR(S,-1);
    S(n);
    //dbg(n);
    printf("Quadrado da matriz #%d:\n",++cases);
    REP(i,n){
      REP(j,n){
	scanf("%llud",&nro);
	//dbg(sqr(nro));
	aux=i2s(sqr(nro));
	A[i][j]=aux;
	if(S[j]<(int)aux.size()){
	  S[j]=(int)aux.size();
	}
      }
      scanf("\n");
    }
    //
    //dbg(maxsize);
    //dbg(true);
    REP(i,n){
      REP(j,n){
	//dbg(maxsize-(int)A[i][j].size());
	REP(k,S[j]-(int)A[i][j].size()){putchar(' ');}
	if(j==n-1){
	  printf("%s",A[i][j].c_str());
	}
	else {
	  printf("%s ",A[i][j].c_str());
	}
      }
      putchar('\n');
    }
    if(nc) putchar('\n');
  }
  
  return 0;
}
