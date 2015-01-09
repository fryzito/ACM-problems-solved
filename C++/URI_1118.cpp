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
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
double nro;
int main(){
  int cnt=0;
  double sum=0;
  bool leo=0;
  while(scanf("%lf\n",&nro)==1){
    if(leo) {
      if(nro<=1||nro>=2) {
	if(nro==2){ 
	  printf("novo calculo (1-sim 2-nao)\n");
	  break;
	}if(nro==1){
	  printf("novo calculo (1-sim 2-nao)\n");
	  leo=0;continue;
	}else{
	  printf("novo calculo (1-sim 2-nao)\n");
	  continue;
	}
      }
      else {
	printf("novo calculo (1-sim 2-nao)\n");
	continue;
      } 
    } else {
      if(nro<0||nro>10) {printf("nota invalida\n");continue;}
      if(cnt<2){
	sum+=nro;
	cnt++;
      }
      if(cnt==2) {printf("media = %.2lf\n",sum/2);cnt=0;sum=0;leo=1;}
    }
  }
  return 0;
}
