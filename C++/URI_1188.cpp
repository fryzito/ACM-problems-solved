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
using namespace std;
char ch;
double A[12][12],nro;
int main(){
  scanf("%c\n",&ch);
  REP(i,12){
    REP(j,12){
      scanf("%lf",&nro);
      A[i][j]=nro;
    }
  }
  if(ch=='S') {
    // Sum
    double Sum=0;
    int k=1;
    for(int i=7;i<=11;i++,k++) {
      for(int j=i-(2*k);j<=i-1;j++){
	Sum+=A[i][j];
      }
    }
    printf("%.1lf\n",Sum);
  } else {
    // Averange
    double Sum=0;
    int cnt=0,k=1;
    for(int i=7;i<=11;i++,k++) {
      for(int j=i-(2*k);j<=i-1;j++){
	Sum+=A[i][j];
	cnt++;
      }
    }
    printf("%.1lf\n",Sum/(double)cnt);
  }
  return 0;	
}
