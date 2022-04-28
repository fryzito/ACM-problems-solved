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
  int nc,x,d;S(nc);
  vector<pair<int,int> > v;
  //  map<int,int>::iterator it;
  while(nc--){
    SC(x);S(d);
    v.pb(mp(x,x+d));
  }
  bool goal = 0;
  for(int i=0;i<v.size()&&!goal;i++){
    for(int j=i+1;j<v.size()&&!goal;j++) {
      if(v[i].f==v[j].s && v[i].s==v[j].f){
	goal = 1;
      }
    }
  }
  if(goal)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;	
}
