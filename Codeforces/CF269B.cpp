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
int n,nro;
vii v ;
int main(){
  S(n);
  map<int,int> mapa;
  int cnt=0;
  REP(i,n){
    SC(nro);
    v.pb(mp(nro,i+1));
    mapa[nro]++;
    if(mapa[nro]>=2) cnt++;
  }
  
  if(cnt>=2){
    printf("YES\n");
    int veces=0;
    bool primero=1;
    sort(ALL(v));
    REPN(i,1,v.size()){
      if(v[i].f==v[i-1].f){
	veces++;
	if(veces>2) break;
	if(primero){
	  REP(k,v.size()){
	    printf("%d%c",v[k].s,char(k==v.size()-1?10:32));
	  }
	  primero=0;
	}
	swap(v[i],v[i-1]);
	REP(k,v.size()){
	  printf("%d%c",v[k].s,char(k==v.size()-1?10:32));
	}
      }
    }
  } else {
    printf("NO\n");
  }
  return 0;
}
