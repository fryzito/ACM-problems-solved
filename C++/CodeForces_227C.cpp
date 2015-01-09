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
char str[MAXN];
int main(){
  scanf("%s",str);
  int n = strlen(str);
  vector<pair<int,int> > v;
  REP(i,n){
    int j = i+1;
    while(str[j]=='0') j++;
    v.pb(mp(str[i]-'0',j-i));
    i=j-1;
  }
  int ans=1;
  int cabeza=v[0].f,len=v[0].s;
  REPN(i,1,v.size()){
    if(len<v[i].s||(len==v[i].s&&cabeza<v[i].f))
      ans=1;
    else
      ans++;
    len+=v[i].s;
  }
  P(ans);
  return 0;	
}
