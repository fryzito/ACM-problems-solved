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
string s1[24]={"brasil","alemanha","austria","coreia","espanha","grecia","estados-unidos","inglaterra","australia","portugal","suecia","turquia","argentina","chile","mexico","antardida","canada","irlanda","belgica","italia","libia","siria","marrocos","japao"};

string s2[24]={"Feliz Natal!","Frohliche Weihnachten!","Frohe Weihnacht!","Chuk Sung Tan!","Feliz Navidad!","Kala Christougena!","Merry Christmas!","Merry Christmas!","Merry Christmas!","Feliz Natal!","God Jul!","Mutlu Noeller","Feliz Navidad!","Feliz Navidad!","Feliz Navidad!","Merry Christmas!","Merry Christmas!","Nollaig Shona Dhuit!","Zalig Kerstfeest!","Buon Natale!","Buon Natale!","Milad Mubarak!","Milad Mubarak!","Merii Kurisumasu!"};
char str[MAXN];
string aux;
int main(){
  map<string,string> mapa;
  REP(i,24) mapa[s1[i]]=s2[i];
  while(SS(str)==1){
    aux=(string)str;
    if(mapa.find(aux)==mapa.end()){
      printf("--- NOT FOUND ---\n");
    } else {
      printf("%s\n",mapa[aux].c_str());
    }
  }
  return 0;
}
