#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define REPR(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define EPS (1e-9)
#define ones(x) __builtin_popcount(x)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define dbg3(x,y,z)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define S(x)scanf("%d\n",&x)
#define SS(str)scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 103
using namespace std;
int n,m;
char str[MAXN];
int main(){
  int cases=0;
  while(S(n)==1&&n){
    map<string,int> mapa;
    map<string,int>::iterator it;
    while(n--){
      S(m);
      REP(i,m){
	SS(str);
	mapa[(string)str]+=i;
      }
    }
    vector<pair<int,string> > v;
    for(it=mapa.begin();it!=mapa.end();it++){
      v.pb(mp((*it).s ,(*it).f));
    }
    if(v.size()!=1){
      sort(RALL(v));
      if(v[0].f==v[1].f){
	printf("Test case %d: Juego invalido\n",++cases);
      }else {
	printf("Test case %d: %s\n",++cases,v[0].s.c_str());	
      }
    } else {
      printf("Test case %d: %s\n",++cases,v[0].s.c_str());	      
    }
  }
  return 0;
}
