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
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
char str[22];
int main(){
  while(scanf("%[^\n]\n",str)==1){
    int n = strlen(str);
    if(n<4) {printf("Cooing\n");continue;}

    if(!(str[0]=='d')){
      printf("Cooing\n");continue;
    }
    if(!(str[n-1]=='i')){
      if(!(str[n-1]=='y')){
	printf("Cooing\n");continue;
      }
    }
    
    int j=1;
    while(j<n&&(str[j]=='a')) {
      j++;
    }
    if(j<2){printf("Cooing\n");continue;}
    if(str[j]!='d'){printf("Cooing\n");continue;}

    j++;
    if((str[j]=='i'&&j==n-1)||(str[j]=='y'&&j==n-1)){
      printf("She called me!!!\n");continue;
    }
    
    if((n-1)-j>1){
      printf("Cooing\n");continue;      
    } else {
      bool goal=0;
      REPN(l,j,n-1){
	if(str[l]!='d'){
	  goal=1;
	  break;
	}
      }
      printf("%s\n",goal?"Cooing":"She called me!!!");
    }
  }
  return 0;	
}
