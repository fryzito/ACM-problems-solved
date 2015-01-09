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
#define ull unsigned long long
using namespace std;
unsigned int A[31];
vector<ull> B,C;
void subsets(vector<ull> v,vector<ull> &ans){
  ans.clear();
  int n = v.size();
  for(int mask=0;mask<(1<<n);mask++) {
    unsigned long long sum=0;
    for(int j=0;j<n;j++) {
      if(mask&(1<<j)) {
	sum+=v[j];
      }
    }
    ans.pb(sum);
  }
  sort(ALL(ans));
  // REP(i,ans.size()){
  //   dbg(ans[i]);
  // }
  // putchar('\n'); 
}
int main(){
  int nc,n;S(nc);
  ll total;
  while(nc--){
    scanf("%lld\n",&total);
    S(n);
    REP(i,n){
      scanf("%ul",&A[i]);
    }
    if(total==0) {
      printf("YES\n");
      continue;
    }
    int mid = n/2;
    subsets(vector<ull>(A,A+mid),B);
    subsets(vector<ull>(A+mid,A+n),C);
    int goal=0;
    REP(i,B.size()){

      if(total>=B[i]) {
	if(binary_search(ALL(C),total-B[i])) {
	  printf("YES\n");
	  goal=1;
	  break;
	}
      }
    }
    if(!goal) {
      printf("NO\n");
    }
  }
  return 0;	
}
