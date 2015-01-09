#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
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
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
char str1[MAXN];
char str2[MAXN];
int main(){
  scanf("%[^\n]\n",str1);
  scanf("%[^\n]\n",str2);
  if(strlen(str1)!=strlen(str2)) {printf("NO\n");return 0;}
  int cont=0;
  string s="";
  REP(i,strlen(str1)){
    if(str1[i]!=str2[i]){
      s+=str1[i];
      s+=str2[i];
      cont++;
    }
    if(cont>2) break;
  }
  if(cont==2){
    if(s[0]==s[3]&&s[1]==s[2]) {
      printf("YES\n");      
    } else
      printf("NO\n");
  }
  else
    printf("NO\n");
  return 0;	
}
