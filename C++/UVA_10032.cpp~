#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>
#define pb push_back
#define REPN(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) REPN(i,0,n)
#define SZ(v) v.size()
#define dbg(x)cout<<#x<<"="<<x<<endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define SC(n) scanf("%d",&n)
#define SC2(n,m) scanf("%d",&n,&m)
#define S(n) scanf("%d\n",&n)
#define S2(n,m) scanf("%d %d\n",&n,&m)
#define MAXN 1004
#define SS(str) scanf("%[^\n]\n",str)
#define P(n) printf("%d\n",n)
using namespace std;
int h1,m1,h2,m2;
int main(){
  cin >> h1 >> m1 >> h2 >> m2;
  while(h1 or m1 or h2 or m2){
    int var1 = h1*60 + m1;
    int var2 = h2*60 + m2;
    if(var2<var1){
      var2+=24*60;
      P(var2-var1);
    }else {
      P(var2-var1);      
    }
    cin >> h1 >> m1 >> h2 >> m2;
  }
  return 0;
}
