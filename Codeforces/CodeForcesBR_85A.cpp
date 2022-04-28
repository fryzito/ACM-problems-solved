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
#define MAXN 103
using namespace std;
int mycmp(string a, string b){
  REP(i,min(a.size(),b.size())){
    if(a[i]!=b[i]) {
      if (a[i]<b[i]) return -1;
      if (a[i]>b[i]) return 1;
    }
  }
  return (a.size()<b.size());
}
char str1[MAXN];
char str2[MAXN];
int main(){
  scanf("%[^\n]\n",str1);
  scanf("%[^\n]\n",str2);
  string s1="",s2="";
  REP(i,strlen(str1)){
    s1+=tolower(str1[i]);
    s2+=tolower(str2[i]);
  }
  P(mycmp(s1,s2));
  return 0;	
}

