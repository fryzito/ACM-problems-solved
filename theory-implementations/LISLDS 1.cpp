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
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 100005
using namespace std;
int A[MAXN],AD[MAXN],L[MAXN],L2[MAXN],sz,sz2,n;
void LIS(int i){
  if(L[0]>A[i]){
    L[0]=A[i];
  } else if(L[sz-1]<A[i]){
    L[sz++]=A[i];
  }else {
    int j=upper_bound(L,L+sz,A[i])-L;
    if(L[j-1]<A[i]&&A[i]<L[j])
      L[j]=A[i];
  }
}
void LDS(int i){
  if(L2[0]>AD[i]){
    L2[0]=AD[i];
  } else if(L2[sz2-1]<AD[i]){
    L2[sz2++]=AD[i];
  }else {
    int j=upper_bound(L2,L2+sz2,AD[i])-L2;
    if(L2[j-1]<AD[i]&&AD[i]<L2[j])
      L2[j]=AD[i];
  }
}
int main(){
  S(n);
  REP(i,n){
    SC(A[i]);
    AD[i]=-A[i];
  }
  int ans=-INF;
  REP(k,n){
    sz=sz2=1;
    REP(i,n){
      if(i==k){
	L2[0]=AD[i];
	if(!i){
	  L[0]=A[i];
	}else {
	  LIS(i);
	}
      }else if(i<k){
	if(!i){
	  L[0]=A[i];
	}else {
	  LIS(i);
	}
      }else { // i>k
	LDS(i);
      }
    }
    // dbg2(sz,sz2);
    if(sz+sz2>ans){
      ans=sz+sz2;
    }
    // REP(i,sz){
    //   printf("%d%c",L[i],char(i==sz-1?40:32));
    // }
    // REP(i,sz2){
    //   printf("%d%c",L2[i],char(i==sz2-1?10:32));
    // }
  }
  ans--;
  P(n-ans);
  return 0;
}
