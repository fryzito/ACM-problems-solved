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
#define MAXN 30004
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int sets[MAXN];
int setCount;
void init(int n){
  setCount=n;
  REP(i,n+1) sets[i]=i;
}
int find(int a){
  if(sets[a]==a) {
    return a;
  } else {
    return sets[a]=find(sets[a]);
  }
}
void join(int a,int b){
  a=find(a); b=find(b);
  if(a!=b) {
    --setCount;
    sets[a] = b;
  }
}
int main(){
  int nc;S(nc);
  int n,m,b,e;
  while(nc--){
    scanf("%d %d\n",&n,&m);
    init(n);
    while(m--){
      scanf("%d %d\n",&b,&e);
      join(b,e);
    }
    // hallar el numero de hijos que tiene un padre
    map<int,int> mapa;
    map<int,int>::iterator it;
    REPN(i,1,n+1){
      mapa[find(i)]++;
    }
    int maxi=0;
    for(it=mapa.begin();it!=mapa.end();it++) {
      maxi=max(maxi,(*it).s);
    }
    printf("%d\n",maxi);
  }
  return 0;	
}
