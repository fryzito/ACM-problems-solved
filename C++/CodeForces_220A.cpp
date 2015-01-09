#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<cstring>
#include<algorithm>
#include<sstream>
#define ll long long
#define VI vector<int>
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define REPR(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define eps (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
int main(){
  ll n,m,i,j,a,b,ans=(1<<30);
  cin >>n>>m>>i>>j>>a>>b;
  vector<pair<ll,ll> > v;
  vector<ll> rpta;
  v.pb(mp(1,1));
  v.pb(mp(1,m));
  v.pb(mp(n,1));
  v.pb(mp(n,m));
  if(i == 1 && j == 1) ans = 0;
  if(i == 1 && j == m) ans = 0;
  if(i == n && j == 1) ans = 0;
  if(i == n && j == m) ans = 0;
  if(ans == 0)
    {
      cout << ans << endl;
      return 0;
    }
  
  if((i-1 < a && n-i < a) || (j-1 < b && m-j < b))
    {
      cout << "Poor Inna and pony!" << endl;
      return 0;
    }
  REP(k,4){
    int dx=abs(i-v[k].f);
    int dy=abs(j-v[k].s);
    if(dx%a==0&&dy%b==0){
      int cx = dx/a;
      int cy = dy/b;
      if(cx%2 xor cy%2)  continue;
      else {
	  rpta.pb(max(cx,cy));
      }
    }
    else  continue;
  }
  ll nro = INF;
  REP(i,rpta.size()){
    //    dbg(rpta[i]);
    nro = min(nro,rpta[i]);
  }
  if(nro==INF){
    cout<<"Poor Inna and pony!\n"<<endl;
  } else {
    cout << nro << endl;
  }
  return 0;	
}
