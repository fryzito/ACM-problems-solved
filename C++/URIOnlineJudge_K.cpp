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
int k,n,nro;
int main(){
  while(S2(k,n)==2){
    set<int> setp;
    int cnt=0;
    vi v;
    REP(i,k){
      SC(nro);
      if(setp.find(nro)==setp.end()){
	v.pb(nro);
	cnt++;
	setp.insert(nro);
      }
    }
    if(cnt<n){
      int aux=v[v.size()-1];
      REP(i,n-cnt) v.pb(aux);
    }
    REP(i,v.size()){
      if(i!=v.size()-1)
	printf("%d ",v[i]);
      else
	printf("%d\n",v[i]);
    }
  }
  return 0;
}
