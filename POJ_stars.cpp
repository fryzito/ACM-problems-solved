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
#define SS(str) scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 100005
#define LSOneI(i) (i|(i+1))
#define LSOneD(i) ((i & (i+1))-1)
using namespace std;
int n,m,x,y,f[MAXN],v[MAXN],lvl[MAXN];
int sum(int x){
  int r=0;
  for(int i=x;i>=0;i=LSOneD(i))
    r+=f[i];
  return r;
}
void inc(int x,int delta){
  for(int i=x;i<n;i=LSOneI(i))
    f[i]+=delta;
}
int main(){
  S(m);
  n=MAXN;
  CLR(lvl,0);
  REP(i,m){
    S2(x,y);
    int nivel=sum(x);
    lvl[nivel]++;
    inc(x,1);
  }
  REP(i,m){
    P(lvl[i]);
  }
  return 0;
}
