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
int f(int a,int b,int op) {
  switch(op){
  case 0:
    return a+b;
  case 1:
    return a-b;
  case 2:
    return a*b;
  case 3:
    return a/b;
  }
}
int main(){
  int n,nro;
  int A[4];
  while(scanf("%d\n",&n)==1 && n){
    int cont=0;
    int m=n;
    while(m--){
      scanf("%d\n",&nro);
      A[0]=nro/1000;
      nro=nro%1000;
      A[1]=nro/100;
      nro=nro%100;
      A[2]=nro/10;
      A[3]=nro%10;
      sort(A,A+4);
      bool goal = false;
      do{
	for(int i=0;i<4;i++)
	  for(int j=0;j<4;j++)
	    for(int k=0;k<4;k++){
	      if( f(f(f(A[0],A[1],i),A[2],j),A[3],k) == 10 ) {
		cont++;
		dbg2(A[0],A[1]);
		dbg2(A[2],A[3]);
		dbg2(i,j);
		dbg2(k,cont);
		i=j=k=4;
		goal = 1;
	      }
	    }
	if(goal) break;
      }while(next_permutation(A,A+4));
    }
    if(cont == n)
      printf("TRUE\n");
    else
      printf("BUSTED\n");
  }
  return 0;	
}
