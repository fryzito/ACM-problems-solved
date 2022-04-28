#include <bits/stdc++.h>
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
#define SC2(x,y)scanf("%d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
int A[15];  
int nc,n;
void flip(int id){
  int cont=0;
  REPN(i,id,(id+n)/2){
    swap(A[i],A[n-cont]);
    cont++;
  }
}
int findid(int a){
  REP(j,n){
    if(a==A[j])
      return j;
  }
}
int main(){
  S(nc);
  while(nc--){
    SC(n);
    REP(i,n){
      SC(A[i]);
    }
    vector<int> v(A,A+n);
    sort(ALL(v));
    int ans=0;
    int id;
    REP(i,n){
      //v[i]
      id =findid(v[i]);
      if(id==n-1){ 
	ans++;
	flip(i);
      } else {
	ans+=2;
	flip(id);
	flip(i);
      }
    }
    P(ans);
    REP(i,n){
      dbg(A[i]);
    }
  }
  return 0;	
}
