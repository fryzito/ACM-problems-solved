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
char str[31];
int K;
int main(){
  vector<string> v;
  S(K);
  while(SS(str)==1){
    v.pb((string)str);
  }
  int n=SZ(v);
  int m=SZ(v[0]);
  int rpta = INF;
  REP(i,n){
    REP(j,m){
      REPN(k,i+1,n+1){
	REPN(l,j+1,m+1){
	  // i<k && j<l
	  // hallando los numeros de o's
	  int cnt=0;
	  REPN(a,i,k){
	    REPN(b,j,l){
	      if(v[a][b]=='o') cnt++;
	    }
	  }
	  
	  if(cnt==K) {
	    //calcular nro pasos
	    // (i,j)  (k,l)
	    int c = n-k;
	    int d = m-l;
	    rpta =min(rpta,i+j+c+d+min(i,c)+min(j,d));
	  }
	}
      }    
    }
  }
  printf("%d\n",rpta==INF?-1:rpta);
  return 0;
}
