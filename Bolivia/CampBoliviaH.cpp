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
#define f first
#define s second
#define MAXN 100005
using namespace std;
char str[102];
int main(){
  int cont=0;
  string s1;
  REP(cases,20){
    cin >> s1;
    cont++;
    if(cont<=10){
      int j=0;
      int i=0;
      while(i<s1.size()){
	int numc=0;
	while(s1[i]==s1[j]){
	  numc++;
	  j++;
	}
	printf("%d%c",numc,s1[i]);
	i=j;
      }
      putchar('\n');
    } else {
      for(int i=0;i<s1.size();i+=2){
	int sz=s1[i]-'0';
	REP(j,sz){
	  printf("%c",s1[i+1]);
	}
      }
      putchar('\n');
    }
  }
  
  return 0;	
}
