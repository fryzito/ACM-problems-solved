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
int n,a,b,c,d,e,r,M,sum,sum2,ak,bk,ck,dk,ek;
int main(){
  int cases=0;
  S(n);
  while(n--){
    scanf("%d %d %d %d %d %d/n",&a,&b,&c,&d,&e,&M);
    sum = a+b+c+d+e;
    int r=0;
    while(sum<M){
      r++;
      ak=a+b;
      bk=b+c;
      ck=c+d;
      dk=d+e;
      ek=e+a;
      sum2=ak+bk+ck+dk+ek;
      if(M-sum <= M-sum2){r=-1;break;}
      a=ak,b=bk,c=ck,d=dk,e=ek;
      sum=sum2;
    }
    printf("Case #%d: %d\n",++cases,r);
  }
  return 0;
}
