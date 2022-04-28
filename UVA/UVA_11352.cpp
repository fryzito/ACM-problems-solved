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
#define REPR(i,y,x) for(int i=y;i>=x;i--)
#define clr(A,x) memset(A,x,sizeof(A))
#define oo (1<<30)
#define eps (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
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
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
int n,a,b,bx,by,ex,ey;
int M[10004][10004];
bool visited[10004][10004];
vector<string> v;
void put(int x,int y){
  if(0<=x&&x<a&&0<=y&&y<b){
    if(v[x][y]=='.'){
      v[x][y]='Z';
      visited[x][y]=1;
    }
  }  
}
void caballo(int x,int y){
  visited[x][y]=1;
  put(x-2,y-1);
  put(x-2,y+1);
  put(x-1,y+2);
  put(x+1,y+2);
  put(x+2,y+1);
  put(x+2,y-1);
  put(x+1,y-2);
  put(x-1,y-2);
}
void BFS(int i,int j){
  pair<int,int> t;
  queue<pair<int,int> > cola;
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
char str[101];
int main(){
  S(n);
  while(n--){
    scanf("%d %d\n",&a,&b);
    v.clear();
    REP(i,a){
      scanf("%s\n",str);
      v.pb(str);
    }

    REP(i,a){
       REP(j,b){
	 if(v[i][j]=='Z'&&!visited[i][j]) caballo(i,j);
	 if(v[i][j]=='A') bx=i,by=j;
	 if(v[i][j]=='B') ex=i,ey=j;
       }
    }
    //    dbg2(bx,by);
    BFS(bx,by);
    if(M[ex][ey]==0) {
      printf("King Peter, you can't go now!\n");
    } else {
      printf("Minimal possible length of a trip is %d\n",M[ex][ey]);
    }
     //  REP(i,v.size()){
    //     dbg(v[i]);
    //   }
    //   REP(i,a){
    //    REP(j,b){
    //  	printf("%d ",M[i][j]);
    //    }
    //    putchar('\n');
    // }
    //putchar('\n');
    for(int p=0;p<a;p++)for(int q=0;q<b;q++)M[p][q]=0,visited[p][q]=0;
  }
  return 0;	
}
