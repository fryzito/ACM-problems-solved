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
char str[10];
int main(){
  int k;
  S(k);
  vector<string> v;
  int nro=4;
  while(nro--){
    scanf("%[^\n]\n",str);
    v.pb((string)str);
  }
  int cont=2*k;
  map<char,int> mapa;
  map<char,int>::iterator it;
  REP(i,v.size()){
    REP(j,v[i].size()){
      if(isdigit(v[i][j]))
	mapa[v[i][j]]++;
    }
  }
  bool sepuede=1;
  for(it=mapa.begin();it!=mapa.end();it++) {
    if((*it).second>cont){
      sepuede=0;
      break;
    }
  }
  sepuede ? printf("YES\n"):printf("NO\n");
  return 0;	
}
