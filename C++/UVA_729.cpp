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
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int main(){
  int n,N,H;S(n);
  while(n--){
    scanf("\n%d %d\n",&N,&H);
    int nro=0,cont;
    for(int i=0;i<H;i++) nro|=(1<<i);
    while(nro<(1<<N)){
      string s=""; cont=0;
      for(int j=0;j<N;j++){
	if(nro&(1<<j)){
	  s='1'+s;
	  cont++;
	}
	else
	  s='0'+s;
      }
      if(cont==H) puts(s.c_str());
      nro++;
    }
    if(n)putchar('\n');
  }
  return 0;	
}
