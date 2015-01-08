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
#define dbg3(x,y,z)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define S(x)scanf("%d\n",&x)
#define SS(str)scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define f first
#define s second
#define MOD 100007
#define MAXN 1000006
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
char str[MAXN];
int A[MAXN],dp[MAXN][3],k;
int main(){
  SS(str);
  CLR(A,0);
  int n = strlen(str);
  int sz=1,ans=0;
  REP(i,n){
    if(isdigit(str[i])){
      A[sz++]=str[i]-'0';
    } else {
      if(sz==1) continue;
      // procesar
      sz++;
      REP(i,sz)printf("%d%c",A[i],char(i==sz-1?10:32));
      REP(i,sz){
	REP(j,3){
	  k=(A[i]+j)%3;
	  dp[i][k]=dp[i-1][j];
	  if(k==0) ans+=dp[i][k];
	}
	if(A[i]%3==0){
	  ans++;
	  dp[i][A[i]%3]++;
	}
      }
      REP(i,3){
	REP(j,sz){
	  printf("%d%c",dp[i][j],char(i==sz-1?10:32));
	}
      }
      sz=1;
    }
  }
  sz;
  REPN(i,1,sz){
    REP(j,3){
      k=(A[i-1]+j)%3;
      dp[i][k]=dp[i-1][j];
      if(k==0) ans+=dp[i][k];
    }
    if(A[i-1]%3==0){
      ans++;
    }
    dp[i][A[i-1]%3]++;
  }
  REP(i,3){
    REP(j,sz){
      printf("%d%c",dp[i][j],char(j==sz-1?10:32));
    }
  }
  P(ans);
  return 0;
}
