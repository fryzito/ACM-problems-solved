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
#define SS(str) scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define SZ(v) v.size()
#define LSOneI(i) (i | (i+1))
#define LSOneD(i) ((i & (i+1)) - 1)
#define f first
#define s second
#define MOD 100007
#define MAXN 100005
using namespace std;
int n,m,nc,value,x,y,x2,y2;
int f[1025][1025],v[1025][1025];
int sum(int x,int y){
  int r=0;
  for(int i=x;i>=0; i=LSOneD(i))
    for(int j=y;j>=0; j=LSOneD(j))
      r+=f[i][j];
  return r;
}
void inc(int x,int y,int delta){
  for(int i=x;i<n; i=LSOneI(i))
    for(int j=y;j<m; j=LSOneI(j))  
      f[i][j]+=delta;
  
}
char str[3],str2[3]={'S','E','T'};
int main(){
  // int dx[10]={0,2,3,4,5,6,7,8,9,10};
  // int dy[10]={0,2,3,4,5,6,7,8,9,10};
  // n=m=11;
  // REP(k,10){
  //   inc(dx[k],dy[k],1);
  // }
  // REP(i,11){
  //   dbg2(sum(i,i),i);
  // }
  S(nc);
  while(nc--){
    S(n);
    m=n;
    CLR(f,0);
    CLR(v,0);
    while(scanf("%s ",str)==1&&str[0]!='E'){
      if(strcmp(str,str2)==0){
	S2(x,y);S(value);
	inc(x,y,value-v[x][y]);
	v[x][y]=value;
      } else {
	SC2(x,y); S2(x2,y2);
	printf("%d\n",sum(x2,y2)+sum(x-1,y-1)-sum(x-1,y2)-sum(x2,y-1));
      }
    }
    putchar('\n');
  }
  return 0;
}
