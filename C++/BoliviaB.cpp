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
#define SC2(x,y)scanf("%d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 200005
using namespace std;
int A[MAXN];
bool used[MAXN];
int n,m,x,y,subset;
void init(int sz){
  REP(i,sz){A[i]=i;used[i]=1;}
  subset=n;
}
int find(int x){
  if(x==A[x])
    return x;
  else
    return A[x]=find(A[x]);
}
int join2(int a,int b){
  a=find(a); b=find(b);
  // dbg2(a,b);
  if(a!=b){
    A[a]=b;
  }
}
int join(int a,int b){
  a=find(a); b=find(b);
  if(a!=b){
    subset--;
    A[a]=b;
  }
}
int main(){
  int nc;S(nc);
  while(nc--){

    scanf("\n");
    S2(n,m);
    init(n);
    vector<int> G[n];
    while(m--){
      S2(x,y);
      G[x].pb(y);
      G[y].pb(x);
    }

    // leer los eliminados
    vi nodos;
    S(m);
    int nro;
    REP(i,m){
      S(nro);
      nodos.pb(nro);
      used[nro]=0;
    }
     
    vi ans;
    REP(i,n){
      if(used[i]){
	REP(j,G[i].size()){
	  if(used[G[i][j]]){
	    join2(i,G[i][j]);
	  }
	}
      }
    }
     
    // los conjuntos iniciales del join
    set<int> setp;
    REP(k,n){
      if(used[k])
	setp.insert(find(A[k]));
    }
    
    // dbg(setp.size());

    // for(set<int>::iterator it=setp.begin();it!=setp.end();it++){
    //   printf(" %d",(*it));
    // }
    // putchar('\n');
    // REP(i,n){
    //   printf(" %d",used[i]);
    // }
    // putchar('\n');
    subset=setp.size();
    ans.pb(subset);
     
    // iniciando el union find

    for(int i=nodos.size()-1;i>=0;i--){
      bool first1=1;
      used[nodos[i]]=1;
      REP(j,G[nodos[i]].size()){
	if(first1){
	  //
	  // REP(l,n){
	  //   printf(" %d",used[l]);
	  // }
	  // putchar('\n');
	  // unir con un elemento que exista
	  if(used[G[nodos[i]][j]])
	    join2(nodos[i],G[nodos[i]][j]);
	  else continue;
	  first1=0;
	}
	else{
	  if(used[G[nodos[i]][j]] && G[nodos[i]][j]!=nodos[i])
	    join(nodos[i],G[nodos[i]][j]);
	}
      }
      if(first1){
	subset++;
      }
      ans.pb(subset);
    }
    
    int sz=ans.size();
    for(int i=sz-1;i>=0;i--){
      P(ans[i]);
    }
    if(nc) putchar('\n');
  }
  return 0;	
}
