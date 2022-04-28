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
#define S(x)scanf("%d\n",&x)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MOD 100007
#define MAXN 103
using namespace std;
int n,A[MAXN],nro;

int main(){
  S(n);
  REP(i,n){ SC(A[i]);}
  vector<int> G[n];
  int menor=INF;
  int id;
  REP(i,n){
    int sum=0;
    REP(j,A[i]){
      SC(nro);
      sum+=nro;
      G[i].pb(nro);
    }
    if(sum*5 + A[i] * 15 < menor) {
      menor = sum*5 + A[i] * 15 ;
      id = i;
    }
  }
  // dbg2(menor,id);
  printf("%d\n",menor);
  return 0;	
}
