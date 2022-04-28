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
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int main(){
  int r1,c1,r2,c2;
  scanf("%d %d %d %d\n",&r1,&c1,&r2,&c2);
  // Rook
  int rook;
  if(r1==r2 or c1==c2)
    rook=1;
  else
    rook=2;
  //king
  int a=abs(r1-r2);
  int b=abs(c1-c2);
  int king=max(a,b);
  //bishop
  int bishop;
  if((r1&1)^(c1&1)){
    if((r2&1)^(c2&1)) {
      //normal
      if(abs(r1-r2)==abs(c1-c2))
	bishop=1;
      else
	bishop=2;
    } else {
      bishop=0;
    }
  } else {
    if((r2&1)^(c2&1)) {
      bishop=0;
    } else {
      //normal
      if(abs(r1-r2)==abs(c1-c2))
	bishop=1;
      else
	bishop=2;
    }
  }
  printf("%d %d %d\n",rook,bishop,king);
  return 0;	
}
