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
int m,n,D,M,sum;
set<int> G[MAXN];
int A[MAXN],nro,dist[MAXN];
bool used[MAXN];
queue<int> cola;
void BFS(){
  set<int>::iterator it;
  cola.push(1);
  dist[1]=0;
  while(!cola.empty()){
    int nodo = cola.front();cola.pop();
    for(it=G[nodo].begin();it!=G[nodo].end();it++){
      if(dist[(*it)]==-1){
	dist[(*it)]=dist[nodo]+1;
	cola.push((*it));
      }
    }
  }
  return;
}
int main(){
  S2(m,n);
  while(m--){
    SC(nro);
    REP(i,nro){
      SC(A[i]);
    }
    REP(i,nro){
      REPN(j,i+1,nro){
	G[A[j]].insert(A[i]);
	G[A[i]].insert(A[j]);
      }
    }
  }
  CLR(used,0);
  // set<int>::iterator it;
  // REPN(i,1,n+1){
  //   dbg(i);
  //   for(it=G[i].begin();it!=G[i].end();it++){
  //     printf("%d ",(*it));
  //   }
  //   putchar('\n');
  // }
  cola = queue<int>();
  CLR(dist,-1);
  D=M=sum=0;
  BFS();
  REPN(i,1,n+1){
    if(dist[i]!=-1){
      sum+=dist[i];
      M=max(dist[i],M);
      D++;
    }
  }
  
  printf("%d %d %d\n",D,M,sum);
  return 0;
}
