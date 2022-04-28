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
#define fd(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define eps (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define RAL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 50004
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int n,m,b,e,A[MAXN];
int t0[1000006];
int tneg[1000006];
int sumneg(int x){
  int result=0;
  for(int i=x;i>=0;i = (i & (i+1))-1)
    result += tneg[i];
  return result;
      
}
void incneg(int x, int delta){
  for(int i=x;i<=n;i = (i|(i+1)))
    tneg[i] += delta;
}
int sum0(int x){
  int result=0;
  for(int i=x;i>=0;i = (i & (i+1))-1)
    result += t0[i];
  return result;
      
}
void inc0(int x, int delta){
  for(int i=x;i<=n;i = (i|(i+1)))
    t0[i] += delta;
}
int main(){
  int n;S(n);
  memset(t0,0,sizeof t0);
  memset(tneg,0,sizeof tneg);
  REP(i,n){
    scanf("%d",&A[i]);
    dbg(A[i]);
    if(A[i]==0) {
      inc0(i,1);
      dbg(true);
    } else {
      if(A[i]<0){
	incneg(i,1);
      }
    }
  }
  for(int i=0;i<=n;i++) {
    printf("%d ",sum0(i));
  }
  putchar('\n');
  for(int i=0;i<=n;i++) {
    printf("%d ",sumneg(i));
  }
  putchar('\n');
  S(m);
  while(m--){
    scanf("%d %d\n",&b,&e);
    b--;e--;
    if(sum0(e) - sum0(b-1)!=0){
      printf("0\n");
    } else {
      int nroneg=sumneg(e)-sumneg(b-1);
      dbg(nroneg);
      if(nroneg%2) {
	printf("-\n");
      } else {
	printf("+\n");	
      }
    }
    dbg2(b,e);
  }
  return 0;	
}
