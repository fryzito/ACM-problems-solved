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
#define P(x)printf("%d\n",x)
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 100005
using namespace std;
int nc,n;
int contA,contB,contC;
int cases=0;
int main(){
  S(nc);
  while(nc--){
    S(n);
    int nro = n/3;
    contA=contB=contC=nro;
    if(3*nro == n) {
    } else if(3*nro+1 == n){
      contB++;
    } else {
      contB++;
      contC++;
    }
    //    dbg3(contA,contB,contC);
    printf("Caso #%d: ",++cases);
    if((contA&1)||(contB&1)||(contC&1)){
      printf("Imposible\n");
    } else {
      printf("%d\n",(contA+contB+contC)/2);
    }
  }
  return 0;
}
