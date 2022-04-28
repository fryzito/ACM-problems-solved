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
#define SS(str) scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define f first
#define s second
#define MOD 100007
#define MAXN 4003
using namespace std;
int n,A[5];
int main(){
  S(n);
  switch(n){
  case 0:
    printf("YES\n%d\n%d\n%d\n%d\n",1,2,2,3);
    break;
  case 1:
    
    break;
  case 2:
    
    break;
  case 3:
    
    break;
  case 4:
    int sum=0;
    REP(i,4){
      S(A[i]);
      sum+=A[i];
    }
    sort(A,A+4);
    int a = sum/4;
    int b = (A[1]+A[2])/2;
    int c = A[3]-A[0];
    int pot=3*a;
    int suma=a+b+c;
      printf("%s\n",pot==suma?"YES":"NO");
    break;
  }
  return 0;
}
