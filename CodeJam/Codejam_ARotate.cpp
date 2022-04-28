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
#define SC2(x,y)scanf("%d %d\n",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
char s[51][51];
int main(){
  int nc,n,k,cases=0;S(nc);
  while(nc--){
    SC2(n,k);
    REP(i,n){
      scanf("%s\n",s[i]);
    }
    // Right Gravity
    REP(i,n){
      int k = n-1;
      for(int j=n-1;j>=0;j--){
	if(s[i][j]!='.'){
	  s[i][k]=s[i][j];
	  k--;
	}
      }
      while(k>=0){
	s[i][k]='.';
	k--;
      }
    }
    // flags
    bool flagR=0,flagB=0;
    // -check Horizontal
    REP(i,n){
      int countR=0,countB=0;
      int maxR=-1,maxB=-1;
      REP(j,n){
	if(s[i][j]=='R'){
	  countR++;
	}else countR=0;

	if(s[i][j]=='B'){
	  countB++;
	}else countB=0;
	
	maxR=max(maxR,countR);
	maxB=max(maxB,countB);
      }
      if(maxB>=k) flagB=1;
      if(maxR>=k) flagR=1;
    }
    // -check Vertical
    REP(j,n){
      int countR=0,countB=0;
      int maxR=-1,maxB=-1;
      REP(i,n){
	if(s[i][j]=='R'){
	  countR++;
	}else countR=0;

	if(s[i][j]=='B'){
	  countB++;
	}else countB=0;
	
	maxR=max(maxR,countR);
	maxB=max(maxB,countB);
      }
      if(maxB>=k) flagB=1;
      if(maxR>=k) flagR=1;
    }
    // check diagonals
    vector<string> d1(2*n-1);
    vector<string> d2(2*n-1);
    REP(i,n){
      REP(j,n){
	d1[i+j]+=s[i][j];
	d2[i+(n-j-1)]+=s[i][j];
      }
    }
    REP(i,d1.size()){
      int countR=0,countB=0;
      int maxR=-1,maxB=-1;
      REP(j,d1[i].size()){
	if(d1[i][j]=='R'){
	  countR++;
	}else countR=0;

	if(d1[i][j]=='B'){
	  countB++;
	}else countB=0;
	
	maxR=max(maxR,countR);
	maxB=max(maxB,countB);
      }
      if(maxB>=k) flagB=1;
      if(maxR>=k) flagR=1;
    }
    REP(i,d2.size()){
      int countR=0,countB=0;
      int maxR=-1,maxB=-1;
      REP(j,d2[i].size()){
	if(d2[i][j]=='R'){
	  countR++;
	}else countR=0;
	
	if(d2[i][j]=='B'){
	  countB++;
	}else countB=0;
	
	maxR=max(maxR,countR);
	maxB=max(maxB,countB);
      }
      if(maxB>=k) flagB=1;
      if(maxR>=k) flagR=1;
    }
    printf("Case #%d: ",++cases);
    if(flagB+flagR==0){
      printf("Neither\n");
    } else if(flagB+flagR==2){
      printf("Both\n");
    } else if(flagB==1) {
      printf("Blue\n");
    } else {
      printf("Red\n");
    }
    // REP(i,d2.size()){
    //   dbg(d1[i]);
    // }
    // dbg2(flagB,flagR);
    // REP(i,n){
    //   printf("%s\n",s[i]);
    // }
  }
  return 0;	
}
