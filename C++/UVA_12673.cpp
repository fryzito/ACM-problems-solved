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
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int n,g,s,r;
int main(){
  while(S2(n,g)==2){
    int cont3=0,cont1=0;
    vi v;
    while(n--){
      S2(s,r);
      if(s<r){
	v.pb(r-s);
      } else if(s>r){
	cont3++;
      } else {
	cont1++;
      }
    }
    sort(ALL(v));
    if(g<=cont1) {
      cont3+=g;
      cont1-=g;
      g=0;
    } else {
      cont3+=cont1;
      g-=cont1;
      cont1=0;
    }
    // si me sobra g
    int i=0;
    int rpta=0;
    int sz= v.size();
    while((i<sz) && (v[i]<=g) && (0<g)){
      if(v[i]+1<=g){
	g-=(v[i]+1);
	cont3++;
      }
      else if(v[i]==g){
	cont1++;
	g=0;
      }
      i++;
    }
    //dbg3(cont3,cont1,g);
    P(cont3*3+cont1);
  }
  return 0;
}
