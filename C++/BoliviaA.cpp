#include <bits/stdc++.h>
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
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
char A[4][8];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
bool goal1;
void isline2(int x,int y){
  if(goal1) return;
  if(A[x][y]=='*'&&x==3) {goal1=1;return;}
  if(0<=x&&x<4&&4<y&&y<7){
    if(A[x][y]=='*'){
      A[x][y]='#';
      REP(i,4){
	isline2(x+dx[i],y+dy[i]);
      } 
    }
  }
  return;
}
bool goal;
void isline(int x,int y){
  if(goal) return;
  if(A[x][y]=='*'&&x==3) {goal=1;return;}
  if(0<=x&&x<4&&0<y&&y<3){
    if(A[x][y]=='*'){
      A[x][y]='#';
      REP(i,4){
	isline(x+dx[i],y+dy[i]);
      } 
    }
  }
  return;
}
int main(){
  int n;S(n);
  while(n){
    REP(i,4){
      REP(j,8){
	scanf("%c",&A[i][j]);
      }
      scanf("\n");
    }
    //
    goal=0;
    isline(0,1);
    goal1=0;
    isline2(0,6);
    
    if(goal) {
      if(n>10)
	printf("OUTDATED\n");
      else{
	if(goal1) {
	  //PREGNAT
	  printf("PREGNANT\n");	
	} else {
	  //NOT PREGNANT
	  if(n<5)
	    printf("WAIT\n");
	  else
	    printf("NOT PREGNANT\n");
	}
      }
    } else {
      printf("INVALID\n");
    }
    
    // REP(i,4){
    //   REP(j,8){
    // 	printf("%c",A[i][j]);
    //   }
    //   putchar('\n');
    // }
    // putchar('\n');
    S(n);
  }
  return 0;	
}

