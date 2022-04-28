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
#define REPR(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define eps (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define PR(x)printf("%d",x);
#define f first
#define s second
#define N 9
using namespace std;
int A[N][N];
bool goal;
bool UsedInBox(int inirow,int inicol,int num){
  REP(i,3){
    REP(j,3){
      if(A[inirow+i][inicol+j]==num)
	return 1;
    }
  }
  return 0;
}
bool UsedInRow(int row,int num){
  REP(col,9){
    if(A[row][col]==num)
      return 1;
  }
  return 0;
}
bool UsedInCol(int col,int num){
  REP(row,9){
    if(A[row][col]==num)
      return 1;
  }
  return 0;
}
bool estaLibre(int row,int col,int num){
  return 
    !UsedInCol(col,num)&&!UsedInRow(row,num)&&
    !UsedInBox(row-row%3,col-col%3,num);
}
bool find0(int &row,int &col){
  for(row=0;row<N;row++)
    for(col=0;col<N;col++)
      if(A[row][col]==0)
	return 1;
  return 0;
}
void solver(){
  int row,col;
  if(!find0(row,col)){
    goal = 1;
    return;
  }
  for(int num=1;num<=9;num++){
    if(estaLibre(row,col,num)) {
      A[row][col]=num;
      solver();
      if(goal) return;
      A[row][col]=0;
    }
  }
  return;
}

int main(){
  int nc;S(nc);
  char ch;
  while(nc--){
    REP(i,9){
      REP(j,9){
	ch=getchar();
	A[i][j]=ch-'0';
      }
      scanf("\n");
    }
    goal=0;
    solver();
    REP(i,9){
      REP(j,9){
	printf("%d",A[i][j]);
      }
      putchar('\n');
    }
  }
  return 0;	
}
