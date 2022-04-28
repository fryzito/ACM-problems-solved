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
#define vint vector<int>
#define REP(i,n) REPN(i,0,n)
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REPR(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define eps (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x) scanf("%d\n",&x)
#define SC(x) scanf("%d",&x)
#define S2(x,y) scanf("%d %d\n",&x,&y)
#define P(x) printf("%d\n",x)
using namespace std;
int main(){
  int n,b,e; S(n);
  vector<int> G[n+1];
  REP(i,n-1){
    S2(b,e);
    G[b].pb(e);
    G[e].pb(b);
  }
  int cont=0;
  REPN(i,1,n+1){
    if(G[i].size()==1) cont++;
  }
  P(n-cont);
  return 0;	
}

