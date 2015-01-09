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
#define dbg(x) cout << #x <<"="<< x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
char str[100];
map<char,int> mapa;
bool mycmp(string a, string b){
  REP(i,min(a.size(),b.size())){
    if(a[i]!=b[i]) {
      return (mapa[a[i]]<mapa[b[i]]);
    }
  }
  return (a.size()<b.size());
}
int main(){
  int n,cases=0;;
  while(scanf("%d ",&n)==1&&n){
    scanf("%[^\n]\n",str);
    mapa.clear();
    REP(i,strlen(str)){
      mapa[str[i]]=i;
    }
    vector<string> v;
    while(n--){
      scanf("%[^\n]\n",str);
      v.pb((string)str);
    }
    sort(ALL(v),mycmp);
    printf("year %d\n",++cases);
    REP(i,v.size()){
      printf("%s\n",v[i].c_str());
    }
  }
  return 0;	
}
