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
#define SC2(x,y)scanf("%d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
int A[MAXN];
int subset;
void init(int n){
  REP(i,n){
    A[i]=i;
  } 
  subset=n;
}
int find(int x){
  if(x==A[x]) return A[x];
  else return A[x]=find(A[x]);
}
void join(int a,int b){
  a=find(a);b=find(b);
  if(a!=b){
    subset--;
    A[a]=b;
  }
}
int main(){
  int n,m;
  S2(n,m);
  init(n);
  int x,y;
  while(m--){
    S2(x,y);
    dbg(subset);
    join(x,y);
  }
  dbg(subset); 
  return 0;	
}
