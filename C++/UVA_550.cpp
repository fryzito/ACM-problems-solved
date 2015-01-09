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
int c2n(int nro,int base){
  int result=0;
  int p=1;
  while(nro>=base){
    result+=(nro%base)*p;
    p*=10;
    nro/=base;
  }
  result+=p*nro;
  return result;
}
int base,n1,n2,aux;
int main(){
  while(scanf("%d %d %d\n",&base,&n1,&n2)==3){
    int inicio=n1;
    int ans=0;
    int carri=0;
    while(true){
      aux=n1*n2+carri;
      //dbg(aux);
      carri=aux/base;
      n1=aux%base;
      //      dbg2(aux%base,carri);
      if(aux==inicio && 0==carri){ans++; break;}
      ans++;
    }
    P(ans);
  }
  return 0;
}
