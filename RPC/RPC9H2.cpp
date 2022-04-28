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
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int n,A[MAXN],L[MAXN],sz=0;
void LIS(int nro){
  if(nro<L[0]) {
    L[0]=nro;
  } else if(nro>L[sz-1]){
    L[sz++]=nro;
  } else {
    // busqueda del mas ajustoado con busqueda binaria
    int j=upper_bound(L,L+sz,nro)-L;
      L[j]=nro;
  }
  // REP(i,sz){
  //   printf("%d%c",L[i],char(i==sz-1?10:32));
  // }
}
int main(){
  S(n);
  REP(i,n){
    SC(A[n-1-i]);
  }
  REP(i,n){
    if(!i){
      L[sz++]=A[i];
    } else {
      LIS(A[i]);
    }
  }
  P(sz);
  // REP(i,sz){
  //   printf("%d%c",L[i],char(i==sz-1?10:32));
  // }
  return 0;
}
