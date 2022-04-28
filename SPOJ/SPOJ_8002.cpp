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
#define MAXN 1000006
#define LSOne(Q) (Q & -Q)
using namespace std;
int n,f[MAXN],v[MAXN];
int read(int x){
  int r=0;
  while(x){
    r+=f[x];
    x-=LSOne(x);
  }
  return r;
}
void update(int x,int delta){
  while(x<n){
    f[x]+=delta;
    x+=LSOne(x);
  }
  return ;
}
int main(){
  int Ar[11]={2,4,5,5,6,6,6,7,7,8,9};
  n = 11;
  REP(i,11){
    update(Ar[i],1);
  }
  REPN(i,1,11){
    dbg3(i,read(i),read(i)-(i==1?0:read(i-1)));
  }
  return 0;
}
