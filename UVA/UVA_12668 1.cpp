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
#define MAXN 10004
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int n;
char str[103][103];
int M1[103][103],M2[103][103];
int vis[MAXN],match[MAXN];
char ch;
vector<int> G[MAXN];
int Aug(int nodo){
  if(vis[nodo]) return 0;
  vis[nodo]=1;
  REP(j,G[nodo].size()){
    int r = G[nodo][j];
    if(match[r]==-1||Aug(match[r])){
      match[r]=nodo;
      return 1;
    }
  }
  return 0;
}
int main(){
  while(S(n)==1){
    REP(i,n){
      REP(j,n){
	ch=getchar();
	str[i][j]=ch;
      }
      scanf("\n");
    }
    CLR(M1,-1);
    CLR(M2,-1);
    //Primera matriz
    int cntN=0;
    REP(i,n){
      REP(j,n){
	if(str[i][j]=='.'){
	  while(j<n&&str[i][j]=='.') M1[i][j]=cntN,j++;
	  cntN++;
	}
      }
    }
    //Segunda matriz
    bool used[103][103];
    CLR(used,0);
    int cntM=0;
    REP(i,n){
      REP(j,n){
	if(str[i][j]=='.' && !used[i][j]){
	  int k=i;
	  while(k<n && str[k][j]=='.') M2[k][j]=cntM,used[k][j]=1,k++;
	  cntM++;
	}
      }
    }
    // REP(i,n){
    //   REP(j,n){
    // 	printf("%d ",M1[i][j]);
    //   }
    //   putchar('\n');
    // }
    // putchar('\n');
    // REP(i,n){
    //   REP(j,n){
    // 	printf("%d ",M2[i][j]);
    //   }
    //   putchar('\n');
    // }
    //Creando el grafo
    fill(G,G+cntN,vector<int>());
    REP(i,n){
      REP(j,n){
	if(str[i][j]=='.'){
	  G[M1[i][j]].pb(cntN+M2[i][j]);
	}
      }
    }
    int ans=0;
    int sz=cntN+cntM;
    fill(match,match+sz,-1);
    REP(i,cntN){
      fill(vis,vis+cntN,0);
      ans+=Aug(i);
    }
    P(ans);
   
  }
  return 0;
}
