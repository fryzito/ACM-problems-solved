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
int n,a1,a2,a3;
ll A[MAXN][3];
ll memo[MAXN][3];
ll go(int i,int primero,int segundo,int begin){
  if(memo[i][segundo]!=-1) return memo[i][segundo];
  if(i==n) {
    return 0;
  }
  ll ans=0;
  if(i==n-2){
    REP(j,3){
      if(primero<segundo){
	if(segundo!=j&& j<segundo &&begin!=j){
	  // dbg2(ultimo,j);
	  ans=max(ans,go(i+1,segundo,j,begin));
	}
      } else {
	if(segundo!=j && j>segundo &&begin!=j){
	  // dbg2(ultimo,j);
	  ans=max(ans,go(i+1,segundo,j,begin));
	}
      }
    }
  } else {
    REP(j,3){
      if(primero<segundo){
	if(segundo!=j&&j<segundo){
	  ans=max(ans,go(i+1,segundo,j,begin)); 
	}
      } else {
	if(segundo!=j&&j>segundo){
	  ans=max(ans,go(i+1,segundo,j,begin)); 
	}
      }
    }
  }
  return memo[i][segundo]= ans + A[i][segundo];
}
int main(){
  while(S(n)==1){

    REP(i,n){
      scanf("%lld %lld %lld\n",&A[i][0],&A[i][1],&A[i][2]);
    }
    ll rpta=0;
    if(n==2){

      REP(primero,3){
	REP(segundo,3){
	  if(primero==segundo) continue;
	  rpta=max(rpta,A[0][primero]+A[1][segundo]);
	}
      }      
    }else{
      REP(primero,3){
	REP(segundo,3){
	  if(primero==segundo) continue;
	  CLR(memo,-1);
	  rpta= max(rpta,go(1,primero,segundo,primero)+A[0][primero]); 
	  
	  // putchar('\n');
	  // REP(i,n){
	  //   REP(j,3){
	  //     printf("%lld ",memo[i][j]);
	  //   }
	  //   putchar('\n');
	  // }
	}
      }
    }
    printf("%lld\n",rpta);
  }
  return 0;	
}
