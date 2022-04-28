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
#define MAX_SIZE 500
using namespace std;
const double eps = 1e-7;
int size;
struct Matrix{
  double X[MAX_SIZE][MAX_SIZE];
  Matrix(){}
};
double determinant(Matrix M0){
  double ans = 1;  
  for(int i = 0,r = 0;i<size;++i){
    bool found = false;
    for(int j = r;j<size;++j)
      if(fabs(M0.X[j][i])>eps){
	found = true;
	if(j>r) ans = -ans;
	else break;
                
	for(int k = 0;k<size;++k) swap(M0.X[r][k],M0.X[j][k]);
	break;
      }
    if(found){
      for(int j = r+1;j<size;++j){
	double aux = M0.X[j][i]/M0.X[r][i];
	for(int k = i;k<size;++k) M0.X[j][k] -= aux*M0.X[r][k];
      }     
      r++;
    }else return 0;
  }
  
  for(int i = 0;i<size;++i) ans *= M0.X[i][i];
  return ans;
}
int main(){
  Matrix  m;
  S(size);
  REP(i,size) {
    REP(j,size){
      scanf("%lf",&m.X[i][j]);
    }
  }
  printf("%lf\n",determinant(m));
  return 0;	
}
