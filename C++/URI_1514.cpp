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
#define MAXN 103
using namespace std;
int n,m,row[MAXN],col[MAXN],nro;
int main(){
  while(S2(n,m)==2&&(n||m)){
    int rpta=0;
    CLR(row,0);
    CLR(col,0);
    REP(i,n){
      REP(j,m){
	SC(nro);
	row[i]+=nro;
	col[j]+=nro;
      }
    }
    rpta+=4;
    REP(i,n){if(row[i]==m){ rpta--;break;}}
    REP(i,n){if(row[i]==0){ rpta--;break;}}
    REP(i,m){if(col[i]==0){ rpta--;break;}}
    REP(i,m){if(col[i]==n){ rpta--;break;}}
    P(rpta);
  }
  return 0;
}
