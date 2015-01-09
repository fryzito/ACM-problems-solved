#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<cstring>
#include<algorithm>
#include<sstream>
#define ll long long
#define vint vector<int>
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define fd(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define eps (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define RAL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int V,E,be,en;
int a,b;
vector<string> G;
int M[10004][10004];
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
void BFS(int i,int j){
  pair<int,int> t;
  queue<pair<int,int> > cola;
  bool visited[a][b];
  CLR(visited,0);
  for(int p=0;p<a;p++)for(int q=0;q<b;q++)M[p][q]=0;
  visited[i][j]=1;
  cola.push(mp(i,j));
  M[i][j]=0;
  while(!cola.empty()){
    t = cola.front();
    cola.pop();
    for(int k=0;k<8;k++){
      int aux1=t.f+dx[k];
      int aux2=t.s+dy[k];
      if(0<=aux1 && aux1<a && 0<=aux2 && aux2<b){
	if(!visited[aux1][aux2]){
	  visited[aux1][aux2]=1;
	  M[aux1][aux2]=M[t.f][t.s]+1;
	  cola.push(mp(aux1,aux2));
	}
      }
    }
  }
}
char str[10004];
int main(){
  int n;S(n);
  while(n--){
    scanf("%d %d\n",&a,&b);
    dbg2(a,b);
    G.clear();
    REP(i,a){
      scanf("%s\n",str);
      G.pb(str);
    }
    REP(i,a){
      REP(j,b){
	if(G[i][j]=='A'){
	  BFS(i,j);
	  i=a,j=b;
	}
      }
    }
    REP(i,a){
      REP(j,b){
	printf("%d ",M[i][j]);
      }
      putchar('\n');
    }
  }
  return 0;	
}
