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
int used[6][6];
vector<int> G[10];
vector<string> v;
void go(int padre,int nodo,string str,int lvl){
  if(used[padre][nodo]) return;
  if(used[nodo][padre]) return;
  if(lvl==8) {
    str+=char('0'+nodo);
    v.pb(str);
    //    printf("%s\n",str.c_str());
    return;
  } else {
    REP(i,G[nodo].size()){
      used[padre][nodo]=1;
      used[nodo][padre]=1;
      go(nodo,G[nodo][i],str+char('0'+nodo),lvl+1);
      used[padre][nodo]=0;
      used[nodo][padre]=0;
    }
  }
}
int main(){
  G[1].pb(2);
  G[1].pb(3);
  G[1].pb(5);
  G[2].pb(3);
  G[2].pb(5);
  G[3].pb(4);
  G[3].pb(5);
  G[4].pb(5);

  G[2].pb(1);
  G[3].pb(1);
  G[5].pb(1);
  G[3].pb(2);
  G[5].pb(2);
  G[4].pb(3);
  G[5].pb(3);
  G[5].pb(4);

  CLR(used,0);
  go(0,1,"",0);
  sort(ALL(v));
  REP(i,v.size()){
    printf("%s\n",v[i].c_str());
  }
  return 0;
}
