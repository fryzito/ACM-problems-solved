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
#define S(x)scanf("%d\n",&x)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MOD 100007
#define MAXN 1003
using namespace std;
int A[MAXN];
int main(){
  int n;S(n);
  REP(i,n){
    SC(A[i]);
  }
  vii v;
  int sum=0;
  int sum1=0;
  v.pb(mp(0,0));
  REP(i,n){
    sum+=A[i];
    if(i&1) sum1-= A[i];
    else sum1+=A[i];
    v.pb(mp(sum,sum1));
  }
  REP(i,v.size()){
    dbg2(v[i].f,v[i].s);
  }
  return 0;	
}
