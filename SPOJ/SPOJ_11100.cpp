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
int nc;
ll a,b,n,m;
struct Matrix {
  ll A[2][2];
  Matrix(){}
};

Matrix MMulti(Matrix A,Matrix B){
  Matrix ans;
  REP(i,2){
    REP(j,2){
      ans.A[i][j]=0;
      REP(k,2){
	ans.A[i][j]+=((A.A[i][k]*B.A[k][j]) % m);
	ans.A[i][j]%=m;
      }
    }
  }
  return ans;
}
Matrix MPOW(Matrix base,int p){
  Matrix ans;
  REP(i,2){
    REP(j,2){
      ans.A[i][j] = (i==j);
    }
  }
  while(p){
    if(p&1) ans=MMulti(ans,base);
    base=MMulti(base,base);
    p >>=1;
  }
  return ans;
}
int main(){
  S(nc);
  Matrix A;
  // inicial
  while(nc--){
    scanf("%lld %lld %lld %lld\n",&a,&b,&n,&m);
    A.A[0][0]= 1;
    A.A[0][1]=A.A[1][0]=1;
    A.A[1][1]=0;
    Matrix B = MPOW(A,n);
    ll f = (((b*B.A[0][0])%m)+((a*B.A[0][1])%m)%m) - b;
    f%=m;
    printf("%lld\n",f);
  }
  
  return 0;
}
