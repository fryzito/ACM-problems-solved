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
#define MAXN 10000
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int nc,sumint;
double nro, sum;
string aux1;
char str[MAXN];
int main(){
  int cases=0;
  S(nc);
  double n = (double)nc;
  while(nc--){
    int cnt=0;
    scanf("%lf\n",&nro);
    sum+=nro;
    scanf("%[^\n]\n",str);
    string aux=(string)str;
    istringstream ss(aux);
    while(ss>>aux1){
      cnt++;
    }
    printf("day %d: %d kg\n",++cases,cnt);
    sumint+=cnt;
  }
  printf("%.2lf kg by day\n",(double)sumint/n);
  printf("R$ %.2lf by day\n",sum/n);
  return 0;
}
