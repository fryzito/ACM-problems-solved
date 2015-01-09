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
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int ceros,unos;
int main(){
  S2(ceros,unos);
  if(unos>=ceros-1 && unos<=2*ceros + 2) {
    if(ceros+1==unos || ceros==unos+1||ceros==unos) {
      if(ceros > unos) {
	REP(i,ceros+unos){
	  printf("%d",(i&1));
	}
      } else {
	REP(i,ceros+unos){
	  printf("%d",i%2==0);
	}
      }
    } else {
      int contunos=unos-(ceros+1);
      contunos*=2;
      // dbg(contunos);
      bool first;
      bool primero=1;
      REP(i,ceros+unos){
	if(contunos) {
	  if((i+1)%3==0){
	    printf("0");
	  } else {
	    printf("1");	    
	    contunos--;
	  }
	} else {
	  if(primero){
	    if(i%3==0) first=1;
	    else first=0;
	    primero=0;
	  }
	  // Intercalado
	  printf("%d",first);
	  first= 1-first;
	}
      }
    }
  } else {
    printf("-1");
  }
  putchar('\n');
  return 0;	
}
