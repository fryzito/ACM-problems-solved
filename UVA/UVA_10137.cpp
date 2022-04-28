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
#define MAXN 100005
using namespace std;
int n;
double nro,sum;
ll A[MAXN];
int main(){
  while(S(n)==1,n){
    sum=0;
    REP(i,n){
      scanf("%lf\n",&nro);
      A[i]=(ll)(nro*100.0);
      sum+=(ll)(nro*100.0);
    }
    ll avg=(sum+n-1)/n;
    ll change1=0,change2=0,aux;
    dbg(avg);
    REP(i,n){
      dbg(A[i]-avg);
      aux=A[i]-avg;
      if(aux<0){
	change1-=aux;
      } else {
	change2+=aux;
      }
    }
    printf("$%.2lf\n",(double)max(change2,change1)/100.0);
  }
  return 0;
}
