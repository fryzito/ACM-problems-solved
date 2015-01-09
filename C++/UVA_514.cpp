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
#define MAXN 1003
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int A[MAXN],B[MAXN];
int nc,n;
int main(){
  while(S(n),n){
    while(true){
      SC(B[0]); if(!B[0]){putchar('\n');break;}
      REPN(i,1,n){
	SC(B[i]);
      }
      REP(i,n){
	A[i]=i+1;
      }
      int goal=1,j=0;
      stack<int> pila;
      REP(i,n){
	if(pila.empty()){
	  while(j<n&&B[i]!=A[j]){
	    pila.push(A[j]);
	    j++;
	  }
	  j++;
	} else {
	  if(pila.top()==B[i]){
	    pila.pop();
	  } else {
	    while(j<n&&B[i]!=A[j]){
	      pila.push(A[j]);
	      j++;
	    }
	    if(j==n) pila.push(B[i]);
	    j++;
	  }
	}
      }
      //dbg2(j,pila.empty());
      printf("%s\n",pila.empty()?"Yes":"No");
      // REP(i,n){
      // 	printf("%d%c",B[i],char(i==n-1?10:32));
      // }
    }
  }
  return 0;
}
