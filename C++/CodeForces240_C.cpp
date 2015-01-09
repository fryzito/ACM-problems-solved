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
#define MAXN 100005
using namespace std;
int n,k;
int main(){
  S2(n,k);
  vi sol;
  if(n==1&&k==0){printf("1\n");return 0;}
  if(k<n/2||n==1) {printf("-1\n");return 0;}

  int x = k-((n-2)/2);
  set<int> setp;
  sol.pb(x); setp.insert(x);
  sol.pb(2*x); setp.insert(2*x);
  int aux1,aux2;
  int sz=(n-2)/2;
  int i=0;
  int j=0;
  while(i<sz){
    aux1= 2*j + 1;
    aux2= 2*j + 2;
    if(setp.find(aux1)==setp.end()&&setp.find(aux2)==setp.end()){
      sol.pb(aux1); setp.insert(aux1);
      sol.pb(aux2); setp.insert(aux2);
      i++;
      j++;
    } else {
      j++;
    }
  }
  if(n&1) {
    j = 2*j +1;
    while(setp.find(j)!=setp.end()){j++;}
    sol.pb(j);
  }
  REP(id,sol.size()){
    if(id==sol.size()-1) {
      printf("%d\n",sol[id]);      
    } else {
      printf("%d ",sol[id]);
    }
  }
  return 0;	
}
