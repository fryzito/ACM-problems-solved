#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#define pb push_back
#define REPN(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) REPN(i,0,n)
#define SZ(v) v.size()
#define dbg(x)cout<<#x<<"="<<x<<endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define SC(n) scanf("%d",&n);
#define S(n) scanf("%d\n",&n);
using namespace std;
int nc,n,veces;
int main(){
  S(nc);
  while(nc--){
    scanf("\n");
    S(n);
    S(veces);
    while(veces--){
      int j=n;
      for(int i=1;i<=n;i++){
	for(int j=0;j<i;j++){
	  putchar('0'+i);
	}
	putchar('\n');
      }
      for(int i=n-1;i>=1;i--){
	for(int j=0;j<i;j++){
	  putchar('0'+i);
	}
	putchar('\n');
      }
      if(veces)putchar('\n');
    }
    if(nc)putchar('\n');
  }
  return 0;
}
