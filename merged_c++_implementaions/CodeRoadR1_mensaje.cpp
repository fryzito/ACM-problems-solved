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
#define S(x)scanf("%d\n",&x)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int nc;
int nro;
string str;
string rem = "CodeRa";
string code = "CodeRoad";
int main(){
  int cases=0;
  map<char,int> mapa;
  mapa['c']= 1;  mapa['(']= 1;
  mapa['0']= 2;  mapa['O']= 2;
  mapa['D']= 3;
  mapa['E']= 4;  mapa['3']= 4;
  mapa['r']= 5;
  mapa['A']= 6;  mapa['@']= 6;
  S(nc);
  while(nc--){
    printf("Caso #%d: ",++cases);
    cin >> nro >> str;
    int sz=nro;
    sz-=7;
    if(sz<0) {
      printf("0\n");
      continue;
    }
    map<string,int> mp;
    string aux="";
    REP(i,nro){
      if(mapa[str[i]]!=0){
	str[i]=rem[mapa[str[i]]-1];
      }
    }
    int cont=0;
    string aux1;
    REP(i,sz){
      bool goal=0;
      REP(j,8){
	if(str[i+j]!=code[j]){
	  goal=1;
	  break;
	}
      }
      if(!goal) cont++;
    }
    P(cont);
    // dbg2(nro,str);
  }
  return 0;	
}
