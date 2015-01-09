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
int xi,yi,xf,yf,rook,bisof,king;
int main(){
  scanf("%d %d %d %d\n",&xi,&yi,&xf,&yf);
  if( ((xi^yi) & 1) == ((xf^yf) & 1) ){
    if(xi+yi==xf+yf || xi-yi==xf-yf){
      bisof=1;
    } else {
      bisof=2;
    }
  } else {
    bisof=0;
  }

  if(xi==xf||yf==yi){
    rook=1;
  } else {
    rook=2;
  }
  king=min(abs(xi-xf),abs(yi-yf))+abs(abs(xi-xf)-abs(yi-yf));
  printf("%d %d %d\n",rook,bisof,king);
  return 0;
}
