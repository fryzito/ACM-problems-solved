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
#define MAXN 100005
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int n,m,nro;
int main(){
  int ngrenais=0;
  int inter=0,gremio=0,empates=0;
  while(S2(n,m)==2){
    ngrenais++;
    if(n<m){
      gremio++;
    } else if(n>m){
      inter++;
    } else {
      empates++;
    }
    printf("Novo grenal (1-sim 2-nao)\n");
    S(nro);
    if(nro!=1){
      printf("%d grenais\n",ngrenais);
      printf("Inter:%d\n",inter);
      printf("Gremio:%d\n",gremio);
      printf("Empates:%d\n",empates);
      if(inter==gremio)
	printf("Nao houve vencedor\n");
      else
	printf("%s venceu mais\n",inter<gremio?"Gremio":"Inter");
      break;
    }
  }
  return 0;
}