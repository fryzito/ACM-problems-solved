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
#define MAXN 100005
using namespace std;
int nc,n,m,T[6];
char s1[10],s2[10];
string sx[6]={"XXL", "XL", "L", "M" , "S","XS"};
vector<pair<string,string> > v;
map<string,int> mapa;
bool SiT(int A[6]){
  REP(i,6){
    if(A[i]>T[i]) return 0;
  }
  return 1;
}
bool go(int lvl,int A[6],string str){
  // si numero de T excedido y lvl==(m-1)
  A[mapa[str]]++;

  // dbg(str);
  // REP(i,6){
  //   printf("%d ",A[i]);
  // }
  // putchar('\n');

  if(lvl==m-1){
    if(SiT(A)){
      return 1;
    } else {
      A[mapa[str]]--;
      return 0;
    }
  }
  else {
    // seguimos buscando
    if(SiT(A)) {
      if(go(lvl+1,A,v[lvl+1].f) || go(lvl+1,A,v[lvl+1].s)) return 1;
      else {
	A[mapa[str]]--;
	return 0;
      }
    } else {
      // excedimos camisetas
      A[mapa[str]]--;
      return 0;
    }
  }
}
int main(){
  S(nc);
  while(nc--){
    S2(n,m);
    REP(i,6){T[i]=n/6;mapa[sx[i]]=i;}
    v.clear();
    REP(i,m){
      scanf("%s %s\n",s1,s2);
      v.pb(mp((string)s1,(string)s2));  
    }
    int A[6]; CLR(A,0);
    if(go(0,A,v[0].f)||go(0,A,v[0].s))
      printf("YES\n");
    else 
      printf("NO\n");

  }
  return 0;
}
