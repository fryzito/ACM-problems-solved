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
int n,d,nro,cnt;
char ch;
string s2;
int main(){
  while(S2(n,d)==2,n||d){
    stack<int> pila;
    s2="";
    ch=getchar();
    nro = ch-'0';
    pila.push(nro);
    REPN(i,1,n){
      ch=getchar();
      if(!d){
	s2+=ch;
      } else {
	nro = ch-'0';
	while(!pila.empty()&&(pila.top()<nro)&&d){
	  pila.pop();
	  d--;
	}
	pila.push(nro);
      }
    }
    ch=getchar();
    while(d) {pila.pop();d--;}
    string s1="";
    while(!pila.empty()){
      s1 = char('0'+pila.top()) + s1;
      pila.pop();
    }
    printf("%s%s\n",s1.c_str(),s2.c_str());
  }
  return 0;
}
