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
char str[21];
int M[21][21];
int M2[21][21];
int minimo3(int a,int b,int c){
  return min(min(a,b),c);
}
int main(){
  int nc,n;S(nc);
  int cases=0;
  while(nc--){
    S(n);
    int m=n;
    vector<string> v;
    while(m--){
      scanf("%[^\n]\n",str);
      v.pb((string)str);
    }
    CLR(M,0);
    CLR(M2,0);
    int area=0;
    int maxsquare=0;
    REP(i,v.size()){
      REP(j,v[i].size()){
	if(v[i][j]=='#'){
	  area++;
	  M[i+1][j+1] = minimo3(M[i+1][j],M[i][j+1],M[i][j])+1;
	  maxsquare=max(maxsquare,M[i+1][j+1]);
	}
      }
    }
    if(sqr(maxsquare)==area)
      printf("Case #%d: YES\n",++cases);
    else
      printf("Case #%d: NO\n",++cases);
    // dbg(n);
    // REP(i,n+1) {
    //   REP(j,n+1) {
    // 	printf("%d ",M[i][j]);
    //   }
    //   putchar('\n');      
    // }
    // putchar('\n');
  }
  return 0;	
}
