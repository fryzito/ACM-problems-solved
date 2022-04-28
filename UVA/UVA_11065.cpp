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
#define MAXN 63
using namespace std;
int V,E,nc,a,b;
ll AdjMat[MAXN];
int mxS;
map<int,int> sol;
void rec(int i,long long used, int depth){
  if(used==(1<<V)-1) {
    mxS=max(mxS,depth);
    sol[mxS]++;
  } else {
    for(int j=i;j<V;j++)
      if(!(used&(1<<j)))
	rec(j+1,used|AdjMat[j],depth+1);
  }
}
int main(){
  S(nc);
  while(nc--){
    S2(V,E);
    REP(i,V){
      AdjMat[i]=(1<<i);
    }
    REP(i,E){
      S2(a,b);
      AdjMat[a] |=(1<<b);
      AdjMat[b] |=(1<<a);
    }
    mxS=0;
    sol.clear();
    rec(0,0,0);
    printf("%d\n%d\n",sol[mxS],mxS);
  }
  return 0;	
}
