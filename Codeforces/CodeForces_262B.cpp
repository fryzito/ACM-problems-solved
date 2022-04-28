#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define REPN(i,x,y) for(ll i=x;i<y;i++)
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
#define MAXN 100005
using namespace std;
ll a,b,c;
ll POW(ll b,ll e){
  ll p = 1;
  while(e){
    if(e&1) p*=b;
    b *= b;
    e >>= 1;
  }
  return p;
}
ll func(ll x){
  ll nro=0;
  while(x){
    nro+=x%10;
    x/=10;
  }
  return nro;
}
int main(){
  //REPN(i,1,20) dbg2(i,func(i));
  scanf("%lld %lld %lld\n",&a,&b,&c);
  vector<ll> v;
  REPN(i,1,82){
    ll px = b*POW(i,a)+c;
    //dbg(px);
    if(func(px)==i && 0<px&&px<1000000000LL){
      v.pb(px);
    }   
  }
  sort(ALL(v));
  P((int)SZ(v));
  REP(i,SZ(v)){
    if(i==SZ(v)-1) {
      printf("%lld\n",v[i]);
    } else {
      printf("%lld ",v[i]);	
    }
  }
  return 0;
}
