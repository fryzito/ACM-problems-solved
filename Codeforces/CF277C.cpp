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
#define MAXN 102
using namespace std;
int m,s,A[MAXN],B[MAXN];
int main(){
  while(S2(m,s)==2){
    int cnt=0;
    if(s==0&&m>1){
      printf("%d %d\n",-1,-1);continue;      
    }
    while(s>9){
      B[cnt]=A[cnt]=9;
      s-=9;
      cnt++;
    }
    B[cnt]=A[cnt]=s;
    B[cnt]--;
    cnt++;
    if(cnt>m) {printf("%d %d\n",-1,-1);continue;}
    else {
      REPN(i,cnt,m){
	B[i]=A[i]=0;
      }
      B[m-1]++;
    }
    
    REPR(i,m-1,0){
      printf("%d",B[i]);
    }
    putchar(' ');
    REP(i,m){
      printf("%d",A[i]);
    }
    putchar('\n');
  }
  return 0;
}
