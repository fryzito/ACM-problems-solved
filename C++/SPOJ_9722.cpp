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
#define LSOne(Q) (Q&(-Q))
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int n,f[1000000],nro;
int sum(int x){
  int r=0;
  for(int i=x;i>0;i-=LSOne(i)){
    r+=f[i];
  }
  return r;
}
void up(int x,int delta){
  for(int i=x;i<=n;i+=LSOne(i)){
    f[i]+=delta;
  }
  return ;
}
int main(){
  int nc;
  S(nc);
  while(nc--){
    S(n);
    vector<pair<int,int> > V;
    REP(i,n){
      SC(nro);
      V.pb(mp(nro,i+1)); // up hasta n
    }
    sort(RALL(V));
    int ans=0;
    CLR(f,0);
    REP(i,V.size()){
      ans+=sum(V[i].s);
      up(V[i].s,1);

    }
    P(ans);
  }
  return 0;
}
