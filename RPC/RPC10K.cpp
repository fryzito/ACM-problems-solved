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
#define MAXN 300005
using namespace std;
int n,k;
pair<int,int> v[2*MAXN];
bool cmp(pair<int,int> a, pair<int,int> b){
  if(a.f!=b.f)
    return a.f<b.f;
  return a.s>b.s;
}
int main(){
  S2(n,k);
  REP(i,n){
    S2(v[i].f,v[i].s);
  }
  REP(i,k){
    S(v[n+i].f); v[n+i].s=0;
  }
  n+=k;
  sort(v,v+n,cmp);
  ll sum=0;
  priority_queue<int> cola;
  REP(i,n){
    // dbg2(v[i].f,v[i].s);
    if(v[i].s==0){
      if(!cola.empty()){
	sum+=cola.top();
	// dbg(cola.top());
	cola.pop();
      }
    }else{
      cola.push(v[i].s);
    }
  }
  printf("%lld\n",sum);
  return 0;
}
