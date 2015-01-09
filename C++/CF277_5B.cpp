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
#define ones(x) __builtin_popcount(x)
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
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 103
using namespace std;
int n,m,A[MAXN],B[MAXN],used[MAXN];
int main(){
  S(n);
  REP(i,n) SC(A[i]);
  S(m);
  REP(i,m) SC(B[i]);
  sort(A,A+n);
  sort(B,B+m);
  int size=min(n,m);
  int j=0,i=0,ans=0;
  if(n<=m){
    //termina en n
    while(i<n){
      j=0;
      while(j<m){
	if(abs(A[i]-B[j])<2&&!used[j]){
	  // dbg2(A[i],B[j]);
	  used[j]=1;
	  ans++;
	  i++;j++;
	} else {
	  j++;
	}
      }
      i++;
    }
  } else{
    // termina en m
    while(j<m){
      i=0;
      while(i<n){
	if(abs(A[i]-B[j])<2&&!used[i]){
	  // dbg2(A[i],B[j]);
	  used[i]=1;
	  ans++;
	  i++;j++;
	} else {
	  i++;
	}
      }
      j++;
    }
  }
  P(ans);
  return 0;
}
