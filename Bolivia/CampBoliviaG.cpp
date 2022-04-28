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
#define S(x)scanf("%d\n",&x)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
int n,nro;
int main(){

  while(S(n)==1){
    deque<int> d;
    REP(i,n){
      SC(nro);
      d.push_back(nro);
    }
    vector<int> v;
    REP(i,n){
      SC(nro);
      v.pb(nro);
    }
    bool isgood=1;
    REP(i,n){
      if(v[i]==d.front() || v[i]==d.back()){
    	if(v[i]==d.front()) {
    	  d.pop_front();
    	} else {
    	  d.pop_back();
    	}
      } else {
    	isgood=0;
    	break;
      }
    }
    bool isgood2=1;
    REP(i,n){
      if(v[i]==d.front() || v[i]==d.back()){
	if(v[i]==d.back()) {
	  d.pop_back();
	} else {
	  d.pop_front();
	}
      } else {
	isgood2=0;
	break;
      }
    }
    printf("%d\n",isgood||isgood2);
    scanf("\n");
  }
  
  return 0;	
}

