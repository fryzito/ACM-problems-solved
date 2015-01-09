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
int n,k,A[MAXN],aux;
int main(){
  S2(n,k);
  REP(i,n){
    SC(A[i]);
  }
  int cnt=0;
  int idma,idmi;
  vector<ii> v;
  while(cnt<k){
    idma=max_element(A,A+n)-A;
    idmi=min_element(A,A+n)-A;
    if(A[idma]==A[idmi]) break;
    if(A[idma]-A[idmi]==1) break;
    v.pb(mp(idma+1,idmi+1));
    // dbg2(A[idma],A[idmi]);
    A[idma]--;
    A[idmi]++;
    cnt++;
  }
  idma=max_element(A,A+n)-A;
  idmi=min_element(A,A+n)-A;
  printf("%d %d\n",A[idma]-A[idmi],cnt);
  REP(i,v.size()){
    printf("%d %d\n",v[i].f,v[i].s);
  }
  return 0;
}
