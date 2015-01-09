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
int n;
int A[1000006];
int main(){
  S(n);
  while(true){
    if(n==0) break;
    REP(i,n){
      SC(A[i]);
    }
    sort(A,A+n);
    REP(i,n){
      printf("%d%c",A[i],char(i==n-1?10:32));
    }
    S(n);
  }
  return 0;
}
