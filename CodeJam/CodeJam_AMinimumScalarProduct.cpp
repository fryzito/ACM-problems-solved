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
#define MAXN 1003
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
bool cmp(int a,int b){  return a>b;}
int A[MAXN];
int B[MAXN];
int main(){
  int nc,n,cases=0;
  S(nc);
  while(nc--){
    S(n);
    REP(i,n){
      SC(A[i]);
    }
    REP(i,n){
      SC(B[i]);
    }

    sort(A,A+n);
    sort(B,B+n,cmp);
    
    long long int prod=0;
    REP(i,n){
      prod+=A[i]*(long long int)B[i];
    }
    
    printf("Case #%d: %lld\n",++cases,prod);
    
  }
  return 0;	
}
