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
#define MAXN 1003
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int n,A[10],B[10],code[MAXN],guess[MAXN];
int main(){
  int cases=0;
  while(S(n)==1,n){
    CLR(code,0);
    CLR(A,0);
    REP(i,n){
      SC(code[i]);
      A[code[i]]++;
    }
    printf("Game %d:\n",++cases);
    while(true){
      int suma=0;
      CLR(guess,0);
      CLR(B,0);
      int countSto=0;
      REP(i,n){
	SC(guess[i]);
	B[guess[i]]++;
	if(code[i]==guess[i]) countSto++;
	suma+=guess[i];
      }
      if(suma==0) break;
      int countG=0;
      REPN(i,1,10){
	if(A[i]&&B[i]){
	  countG+=min(A[i],B[i]);
	}
      }
      printf("    (%d,%d)\n",countSto,countG-countSto);
    }
  }
  return 0;
}
