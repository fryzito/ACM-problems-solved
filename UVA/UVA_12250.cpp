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
string cad1[6]= {"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};
string cad2[6]= {"ENGLISH","SPANISH","GERMAN","FRENCH","ITALIAN","RUSSIAN"};
string aux;
char str[15];
int main(){
  map<string,string> mapa;
  set<string> st;
  REP(i,6){
    mapa[cad1[i]]=cad2[i];
    st.insert(cad1[i]);
  }
  int cases=0;
  while(SS(str)==1,!(strlen(str)==1&&str[0]=='#')){
    aux=(string)str;
    if(st.find(aux)!=st.end()){
      printf("Case %d: %s\n",++cases,mapa[aux].c_str());      
    } else {
      printf("Case %d: UNKNOWN\n",++cases);
    }
  }
  return 0;
}
