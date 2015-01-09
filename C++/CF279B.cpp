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
#define MAXN 1000006
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int n,b,e;
int aux1,aux2;
int A[MAXN],B[MAXN],rpta[200005];
int main(){
  S(n);
  CLR(A,-1);
  CLR(B,-1);
  set<int> st;
  vector<int> v;
  REP(i,n){
    S2(b,e);
    v.pb(b);
    A[b]=e;
    B[e]=b;
  }  
  int id=0;
  int cnt=2;
  st.insert(id);
  while(A[id]!=-1&&A[id]!=0){
    rpta[cnt]=A[id];
    cnt+=2;
    id=A[id];
    st.insert(id);
  }
  REP(i,v.size()){
    if(st.find(v[i])==st.end()){
      id=v[i];
      break;
    }
  }
  // dbg(id);
  while(B[id]!=-1&&B[id]!=0){
    cnt-=2;
    id=B[id];
  }
  // dbg(id);
  // int sz=n+1;
  // REPN(i,1,sz){
  //   printf("%d%c",rpta[i],char(i==sz-1?10:32));
  // }
  cnt=1;
  rpta[cnt]=id; cnt+=2;
  while(A[id]!=-1&&A[id]!=0){
    rpta[cnt]=A[id];
    cnt+=2;
    id=A[id];
  }
  int sz=n+1;
  REPN(i,1,sz){
    printf("%d%c",rpta[i],char(i==sz-1?10:32));
  }
  return 0;
}
