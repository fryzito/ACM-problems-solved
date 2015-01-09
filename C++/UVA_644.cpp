#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
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
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
char str[11];
vector<string> v;
int main(){
  int cases=0;
  while(scanf("%[^\n]\n",str)==1){
    if(strlen(str)==1&&str[0]=='9') {
      bool flag=0;
      sort(ALL(v));
      REPN(i,1,v.size()){
	int cont=0;
	REP(j,min(v[i-1].size(),v[i].size())){
	  if(v[i-1][j]==v[i][j])
	    cont++;
	}
	if(cont==min(v[i-1].size(),v[i].size())){
	  flag=1;
	  break;
	}
      }
      if(flag)
	printf("Set %d is not immediately decodable\n",++cases);
      else
	printf("Set %d is immediately decodable\n",++cases);
      v.clear();
    }
    else {
      v.pb((string)str);
    }
  }
  return 0;	
}
