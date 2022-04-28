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
<<<<<<< HEAD
#define ones(x) __builtin_popcount(x)
=======
>>>>>>> 834af47cfb1c5879470befc7dffcbce3cfbbbcbe
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define dbg3(x,y,z)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define S(x)scanf("%d\n",&x)
<<<<<<< HEAD
#define SS(str)scanf("%[^\n]\n",str)
=======
#define SS(str) scanf("%[^\n]\n",str)
>>>>>>> 834af47cfb1c5879470befc7dffcbce3cfbbbcbe
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
<<<<<<< HEAD
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 100005
using namespace std;
char str[10];
int main(){
  int A[10]={2,7,2,3,3,4,2,5,1,2};
  map<char,int> mapa;
  mapa['0']=2;
  REPN(i,1,10){
    mapa['0'+i]=A[i];
  }
  
  while(SS(str)==1){
    int rpta=0;
    rpta+=mapa[str[0]];
    rpta*=mapa[str[1]];
    printf("%d\n",rpta);
=======
#define f first
#define s second
#define MOD 100007
#define MAXN 4003
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int A[11][8];
int main(){
  A[1][1]=A[1][2]=1;
  A[2][0]=A[2][1]=A[2][6]=A[2][4]=A[2][3]=1;
  A[3][0]=A[3][1]=A[3][6]=A[3][2]=A[3][3]=1;
  A[4][5]=A[4][6]=A[4][1]=A[4][2]=1;  
  A[5][0]=A[5][5]=A[5][6]=A[5][2]=A[5][3]=1;
  A[6][0]=A[6][5]=A[6][6]=A[6][2]=A[6][4]=A[6][3]=1;
  A[7][0]=A[7][1]=A[7][2]=1;  

  A[8][0]=A[8][1]=A[8][2]=A[8][3]=A[8][4]=A[8][5]=A[8][6]=1;  
  REP(i,10){
    REP(j,7){
      
    }
  
>>>>>>> 834af47cfb1c5879470befc7dffcbce3cfbbbcbe
  }
  return 0;
}
