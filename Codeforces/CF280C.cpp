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
#define ones(x) __builtin_popcount(x)
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
int n,r,avg,a,b;
int main(){
  SC2(n,r);S(avg);
  ll suma=0;
  vector<ii> v;
  REP(i,n){
    S2(a,b);
    suma+=a;
    v.pb(mp(b,a));
  }
  sort(ALL(v));
  if(suma>=(ll)n*avg) {
    printf("0\n");
    return 0;
  } else {
    suma=(ll)n*avg-suma;
    int i=0;
    ll rpta=0;
    // dbg(suma);
    while(suma>0){
      if((r-v[i].s)<=suma){
	rpta+=(ll)v[i].f*(r-v[i].s);
	suma-=(ll)(r-v[i].s);
      } else {
	rpta+=(ll)suma*v[i].f;
	break;
      }
      i++;
    }
    printf("%lld\n",rpta);
  }
  return 0;
}
