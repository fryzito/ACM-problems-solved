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
#define MAXN 200005
using namespace std;
int n,nro;
ll sum1,sum2;
int main(){
  S(n);
  sum1=sum2=0;
  vi pri,seg;
  REP(i,n){
    S(nro);
    if(nro<0)
      seg.pb(-1*nro),sum2+=(ll)(nro*-1);
    else
      pri.pb(nro),sum1+=(ll)nro;
  }
  // dbg2(sum1,sum2);
  if(sum1!=sum2){
    printf("%s\n",sum1>sum2?"first":"second");
  } else {
    int len=min(pri.size(),seg.size());
    REP(i,len){
      if(pri[i]!=seg[i]){
	printf("%s\n",pri[i]>seg[i]?"first":"second");
	return 0;
      }	
    }
    if(pri.size()!=seg.size())
      printf("%s\n",pri.size()>seg.size()?"first":"second");
    else
      printf("%s\n",nro>0?"first":"second");
  }
  return 0;
}
