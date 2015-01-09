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
#define MAXN 103
using namespace std;
int n,k,x,A[MAXN];
int go(int b,int e){
  if(A[b]!=A[e]) return 0;
  int cont1=0,cont2=0;
  // Left
  int i=b;
  while(i>=0&&A[i]==A[e]){
    i--;
    cont1++;
  }
  // Right
  int j=e;
  while(j<n&&A[j]==A[b]){
    j++;
    cont2++;
  }
  if(cont1+cont2 > 2) {
    if(i!=-1&&j!=n&&A[i]==A[j]) {
      return cont1+cont2+go(i,j);
    } else {
      return cont1+cont2;
    }
  } else {
    return 0;
  }
}
int main(){
  SC2(n,k); S(x);
  REP(i,n){
    SC(A[i]);
  }
  int rpta=0;
  REP(i,n){
    if(A[i]==x) {
      int b=i-1;
      int j=i;
      while(j<n&&A[j]==x){j++;}
      int e=j;
      int count=e-b-1;
      if(count>=2){
	count+=go(b,e);
	rpta=max(rpta,count);
      }
      i=j-1;
    }
  }
  P(rpta);
  return 0;	
}
