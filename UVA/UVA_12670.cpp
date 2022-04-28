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
int nro[60];
ll a,b,memo[60][2][60];
ll fun(int pos,int esmenor,ll sum){
  if(pos==-1) {return sum;}
  if(memo[pos][esmenor][sum]!=-1) return memo[pos][esmenor][sum];
  ll aux=0;
  if(esmenor){
    aux+=fun(pos-1,1,sum)+fun(pos-1,1,sum+1);
  } else {
    if(nro[pos]==0){
      aux+=fun(pos-1,esmenor,sum);
    } else {
      aux+=fun(pos-1,1,sum)+fun(pos-1,0,sum+1);
    }
  }
  memo[pos][esmenor][sum]=aux;
  return aux;
}
ll suma(ll m){  
  int cnt=0;
  while(m){
    nro[cnt++]=m%2;
    m/=2;
  }
  CLR(memo,-1);
  return fun(cnt-1,0,0);
}
int main(){
  while(scanf("%lld %lld\n",&a,&b)==2) {
    printf("%lld\n",suma(b)-suma(a-1));
  }
  
  return 0;
}
