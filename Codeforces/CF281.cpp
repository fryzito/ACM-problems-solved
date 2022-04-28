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
char str[100];
string cad[2];
int t,nro,n;
char team,color;
int main(){
  SS(str);
  cad[0]=(string)str;
  SS(str);
  cad[1]=(string)str;
  S(n);
  map<int,int> mapa;
  map<int,int> mapa2;
  while(n--){
    scanf("%d %c %d %c\n",&t,&team,&nro,&color);
    if(color=='y'){
      if(team=='h'){
	mapa[nro]++;
	if(mapa[nro]==2){
	  printf("%s %d %d\n",cad[0].c_str(),nro,t);
	}
      }else {
	mapa2[nro]++;
	if(mapa2[nro]==2){
	  printf("%s %d %d\n",cad[1].c_str(),nro,t);
	}
      }
    }else {
      if(team=='h'){
	if(mapa[nro]<2){
	  printf("%s %d %d\n",cad[0].c_str(),nro,t);
	  mapa[nro]+=2;
	}
      } else {
	if(mapa2[nro]<2){
	  printf("%s %d %d\n",cad[1].c_str(),nro,t);
	  mapa2[nro]+=2;
	}
      }
    }
  }
  return 0;
}
