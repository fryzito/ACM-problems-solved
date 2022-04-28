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
#define MAXN 100005
using namespace std;
string cad = "AHIMOTUVWXY";
char str[MAXN];
int main(){
  scanf("%[^\n]\n",str);
  int n = strlen(str);
  bool isreflex=1;
  REP(i,n/2){
    string aux =""; aux+=str[i];
    if(str[i]!=str[n-i-1]||cad.find(aux)==-1) {
      //      dbg(str[i]);
      isreflex=0;
      break;
    }
  }
  if(!isreflex) {printf("NO\n");return 0;}
  if(n&1) {
    //m=1>>n;
    int mid=n>>1;
    // dbg2(str[n>>1],mid);
    string aux = ""; aux += str[mid];
    if(cad.find(aux)==-1) {
      printf("NO\n");return 0;
    }
  }
  printf("YES\n");
  return 0;	
}
