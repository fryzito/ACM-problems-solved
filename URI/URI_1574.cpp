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
int nc,n,nro;
char str[20];
int A[103];
string aux1,aux2;
int main(){
  S(nc);
  while(nc--){
    S(n);
    CLR(A,0);
    int cnt=1;
    int rpta=0;
    while(n--){
      scanf("%[^\n]\n",str);
      if(str[0]=='R') {
	A[cnt]=1;
	rpta++;
      } else if(str[0]=='L') {
	A[cnt]=-1;
	rpta--;
      } else {
	string cad = (string)str;
	istringstream ss(cad);
	ss >> aux1 >> aux2 >> nro;
	A[cnt]=A[nro];
	rpta+=A[nro];
      }
      cnt++;
    }
    // REP(i,cnt){
    //   dbg(A[i]);
    // }
    P(rpta);
  }
  return 0;	
}
