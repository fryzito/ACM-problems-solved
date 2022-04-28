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
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MOD 100007
#define MAXN 100005
using namespace std;
char str[103];
int main(){
  vi v;
  while(scanf("%[^\n]\n",str)==1){
    v.pb(strlen(str)-2);
    // dbg(strlen(str)-2);
  }

  vector<char> aux;
  int contlonger=0,contshorter;
  REP(i,4){
    contshorter=contlonger=0;
    REP(j,4){
      if(j!=i){
	if(v[i]*2<=v[j])
	  contlonger++;
	if(v[i]>=v[j]*2)
	  contshorter++;
      }
    }
    if(contshorter==3||contlonger==3) {
      aux.pb('A'+i);
    }
  }
  // REP(i,aux.size()){
  //   dbg(aux[i]);
  // }
  if(aux.size()==1) {
    printf("%c\n",aux[0]);
  } else {
    printf("C\n");    
  }

  return 0;	
}
