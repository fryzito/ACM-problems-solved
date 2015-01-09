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
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int A[MAXN];
int main(){
  int nc,n;S(nc);
  while(nc--){
    S(n);
    REP(i,n){
      SC(A[i]);
    }
    int pos = 0;
    int neg;
    REP(i,n){
      if(A[i]>0)
	pos+=1;
    }
    neg = n-pos;
    int i=0;
    int j = n-1;
    while(pos!=neg && i<j) {
      if(pos>neg){
	if(A[i]>0) {
	  i += 1;
	  pos-=1;
	} else if (A[j]>0) {
	  j-=1;
	  pos-=1;
	} else {
	  i +=1;
	  neg-=1;
	}
      } else {
	if(A[i]<0) {
	  i +=1;
	  neg-=1;
	} else if(A[j]<0) {
	  j -= 1;
	  neg -=1;
	} else {
	  i +=1;
	  pos-=1;
	}
      }
    }
    if(pos==neg)
      printf("%d\n",pos*2);
    else {
      printf("0\n");
    }
    
  }
  return 0;	
}
