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
#define VI vector<int>
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
int f(int a,int b,int op){
  switch(op){
  case 0:
    return a+b;
  case 1:
    return a-b;
  case 2:
    return a*b;
  }
}
int main(){
  int A[5];
  scanf("%d %d %d %d %d\n",&A[0],&A[1],&A[2],&A[3],&A[4]);
  while(A[0]||A[1]||A[2]||A[3]||A[4]){
    sort(A,A+5);
    bool goal=0;
    do{
      //printf a1,a2,a3,a4,a5
      for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	  for(int k=0;k<3;k++)
	    for(int l=0;l<3;l++){
	      if(f(f(f( f(A[0],A[1],i), A[2],j), A[3],k), A[4],l)==23){
		goal=1;
		i=j=k=3;
	      }
	    }
      if(goal) break;
    }while(next_permutation(A,A+5));
    goal ? printf("Possible\n"):printf("Impossible\n");
    scanf("%d %d %d %d %d\n",&A[0],&A[1],&A[2],&A[3],&A[4]);
  }
  return 0;	
}
