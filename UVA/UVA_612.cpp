#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
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
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
char str[102];
int nc,n,m;
bool comparar(pair<int,string> a,pair<int,string> b){
  if(a.f!=b.f) return (a.f<b.f);
  return 0;
}
int main(){
  S(nc);
  while(nc--){
    scanf("\n");
    S2(n,m);
    vector<pair<int,string> > v;
    REP(i,m){
      scanf("%[^\n]\n",str);
      int cont=0;
      REP(j,n){
	REPN(k,j+1,n){
	  if(str[j]>str[k])
	    cont++;
	}
      }
      v.pb(mp(cont,(string)str));
    }
    stable_sort(ALL(v),comparar);
    REP(i,v.size()){
      printf("%s\n",v[i].s.c_str());
    }
    if(nc)putchar('\n');
  }
  return 0;	
}
