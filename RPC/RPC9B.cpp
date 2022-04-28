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
int n,cnt;
int A[20];
int p[10];
void init(){
  int r=1;
  REP(i,11){
    p[i]=r;
    r*=3;
  }
  return;
}
bool goal=0;
int v[3] = {-1,0,1};
char cad[3]={'-','0','+'};
char B[11];
string rpta;
vector<int>indices;
void go(int lvl,int sum,vector<int> dig,string str){
  if(goal) return;
  if(lvl==dig.size()) {
    //cmaparas multiplicas
    if(sum==n){
      goal=1;
      rpta=str;
      indices=dig;
    }
    return;
  }
  for(int i=0;i<3;i++)
    go(lvl+1,sum+(v[i]*p[dig[lvl]]),dig,str+cad[i]);
}

int main(){
  init();
  while(S(n)==1){
    if(n==0) {printf("0\n");continue;}
    for(int mask=1;mask<(1<<10);mask++){
      vector<int> d;
      for(int j=0;j<10;j++){
	if(mask&(1<<j)){
	  d.pb(j);
	}
      }
      goal=0;
      go(0,0,d,"");
      if(goal){
	REP(i,11){
	  B[i]='0';
	}
	REP(i,indices.size()){
	  B[indices[i]]=rpta[i];
	}
	REPR(k,indices[indices.size()-1],0){
	  putchar(B[k]);
	}
	putchar('\n');
	break;
      }
    }
  // cnt=0;
  // it3(n);
  // REPR(i,cnt-1,0){
  //   printf("%d",A[i]);
  // }
  // putchar('\n');
  }
  return 0;
}
