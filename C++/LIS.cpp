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
#define ARRAY_SIZE(A) sizeof(A)/sizeof(A[0])
using namespace std;
int main(){
  int A[]={0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
  int n= ARRAY_SIZE(A);
  int L[n];
  int sz=0;
  REP(i,n){
    if(!i){
      L[sz++]=A[i];
    } else {
      if(A[i]<L[0]) L[0]=A[i];
      else if(A[i]>L[sz-1]) L[sz++]=A[i];
      else {
	//buscar el que se ajusta mas con upper
	int j=upper_bound(L,L+sz,A[i])-L;
	L[j]=A[i];
      }
    }
    REP(i,sz){
      printf("%d%c",L[i],char(i==sz-1?10:32));
    }
  }
  REP(i,sz){
    printf("%d%c",L[i],char(i==sz-1?10:32));
  }
  // el arreglo solo almacena los ultimos elementos de 
  // cada subsecuancia
  //longitud del LIS 
  P(sz);
  return 0;
}
