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
int sum,limint;
int main(){
  S2(sum,limint);
  vector<pair<int,int> > v;
  REPN(i,1,limint+1){
    v.pb(mp(i&(-i),i));
  }
  int aux=0;
  bool  goal=0;
  sort(RALL(v));
  vi v1;
  REP(i,v.size()){
    if(sum-v[i].f>=0) {
      sum-=v[i].f;
      v1.pb(v[i].s);
    }
  }
  if(sum) printf("-1\n");
  else {
    int sz=v1.size();
    P(sz);
    REP(i,sz){
      if(i==sz-1) {
	printf("%d\n",v1[i]);	
      } else {
	printf("%d ",v1[i]);
      }
    }
  }
  return 0;	
}
