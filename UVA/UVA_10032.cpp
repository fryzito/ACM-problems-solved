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
#define SC2(n,m) scanf("%d %d",&n,&m)
#define S(n) scanf("%d\n",&n)
#define S2(n,m) scanf("%d %d\n",&n,&m)
#define MAXN 1004
#define SS(str) scanf("%[^\n]\n",str)
#define P(n) printf("%d\n",n)
using namespace std;
int nc,n,A[MAXN];
int main(){
  S(nc);
  while(nc--){
    scanf("\n");
    S(n);
    REP(i,n){
      S(A[i]);
    }
    sort(A,A+n);
    int cont1=0,cont2=0;
    for(int i=n-1;i>=0;i--){
      if(cont1<cont2){
	cont1+=A[i];
      } else {
	cont2+=A[i];	
      }
    }
    if(cont1<cont2)
      printf("%d %d\n",cont1,cont2);
    else
      printf("%d %d\n",cont2,cont1);
    if(nc)putchar('\n');
  }
  return 0;
}
