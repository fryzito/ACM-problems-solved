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
int n,x;
unsigned ll memo[26][151];
unsigned ll go(int dado,int suma){
  if(dado==n){
    if(suma>=x) return 1;
    else        return 0;
  }
  if(memo[dado][suma]!=-1) return memo[dado][suma];
  unsigned ll ans=0;
  for(int i=1;i<=6;i++){
    ans+=go(dado+1,suma+i);
  }
  return memo[dado][suma]=ans;
}
int main(){
  while(S2(n,x)==2,x||n){
    CLR(memo,-1);
    unsigned ll v1=go(0,0);
    unsigned ll v2=pow(6,n);
    unsigned ll mcd = __gcd(v1,v2); 
    v1/=mcd;
    v2/=mcd;
    if(v1==0) {
      printf("0\n");
    }else if(v1==v2){
      printf("1\n");
    } else {
      printf("%llu/%llu\n",v1,v2);      
    }
  }
  return 0;
}
