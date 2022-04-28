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
int n;
char str[52];
int sz[103];
vector<string> v[103];
string s1,aux;
int main(){
  S(n);
  while(n){
    CLR(sz,0);
    REP(i,n){
      SS(str);
      s1=(string)str;
      istringstream ss(s1);
      vector<string> v1;
      int sumsize=0;
      while(ss>>aux){
	sumsize+=SZ(aux);
	v1.pb(aux);
      }
      sumsize+=(int)v1.size()-1;
      v[i]=v1;
      sz[i]=sumsize;
    }
    // por aqui eta el error
    int id = max_element(sz,sz+n) - sz;
    //     dbg(id);
    // REP(k,n){
    //   dbg2(sz[k],k);
    // }
    // putchar('\n');
    int maxsize = sz[id];
    //    dbg(maxsize);
    REP(i,n){
      REP(k,maxsize-sz[i]) putchar(' ');
      REP(j,v[i].size()){
	printf("%s%c",v[i][j].c_str(),(char)j==(int)SZ(v[i])-1?10:32);
      }
    }
    S(n);
    if(n) putchar('\n');
  }
  return 0;
}
