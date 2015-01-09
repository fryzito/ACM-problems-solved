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
#define MAXN 100005
using namespace std;
int up,down;
int main(){
  S(up);
  S(down);
  if(up>=down){
    stack<int> pila;
    set<int> st;
    int cnt=2;
    REP(i,down){pila.push(cnt);st.insert(cnt);cnt+=2;}
    vi v;
    int i=1,inserted=0;
    while(inserted<up+1){
      if(st.find(i)==st.end())
	v.pb(i),inserted++;
      i++;
    }
    while(!pila.empty()) v.pb(pila.top()),pila.pop();
    int len = v.size();
    REP(i,len){
      printf("%d%c",v[i],char(i==len-1?10:32));
    }
  } else {
    vi v;
    int size=up+down+1;
    REP(i,down){v.pb(size-i);}
    REPN(i,1,up+2){v.pb(i);}
    int len=v.size();
    REP(i,len){
      printf("%d%c",v[i],char(i==len-1?10:32));
    }
  }
  return 0;
}
