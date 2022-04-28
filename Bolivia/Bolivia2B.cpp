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
#define MAXN 100005
using namespace std;
int n,m,k,nro;
int A[20];
bool G[10][10];
int main(){
  while(S2(n,m)==2,n||m){
    CLR(G,0);
    REP(i,n){
      S(k);
      REP(l,k){
	SC(nro);
	G[i][nro]=1;
	G[nro][i]=1;
      }
    }

    REP(i,n+m){
      A[i]=i;
    }    
    int maximo=0;
    int sum=0;
    if(n<=m){
      // use m
      vi v;
      REPN(i,n,n+m){
	v.pb(A[i]);
	// printf("%d ",A[i]);
      }
      // putchar('\n');
      do{
	sum=0;
	for(int j=0;j<n;j++){
	  if(G[v[j]][A[j]])
	    sum++;
	}
	maximo=max(maximo,sum);
      }while(next_permutation(ALL(v)));
      printf("%d\n",maximo);
    }else {
      // use n
      vi v,v2;
      REP(i,n){
	v.pb(A[i]);
	// printf("%d ",A[i]);
      }
      REPN(i,n,n+m){
	v2.pb(A[i]);
	// printf("%d ",A[i]);
      }
      do{
	sum=0;
	for(int j=0;j<m;j++){
	  // dbg2(A[j-n],A[j]);
	  if(G[v2[j]][v[j]])
	    sum++;
	}
	maximo=max(maximo,sum);
      }while(next_permutation(ALL(v)));
      printf("%d\n",maximo);
    }
    // putchar('\n');
    // REP(i,n+m){
    //   REP(j,G[i].size()){
    // 	dbg(G[i][j]);
    //   }
    // }
    // putchar('\n');
    scanf("\n");
  }
  
  return 0;	
}
