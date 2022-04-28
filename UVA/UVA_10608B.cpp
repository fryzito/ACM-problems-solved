#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>
#include <map>
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
#define MAXN 100005
#define SS(str) scanf("%[^\n]\n",str)
#define P(n) printf("%d\n",n)
using namespace std;
int n,p[MAXN],nc,m,b,e;
int init(int n){  REP(i,n)p[i]=i;}
int find(int i){ return (p[i]==i?i:p[i]=find(p[i]));}
void join(int a,int b){
  a=find(a); b=find(b);
  if(a!=b){
    p[a]=b;
  }
}
int main(){
  S(nc);
  while(nc--){
    S2(n,m);
    init(n);
    while(m--){
      S2(b,e); b--;e--;
      join(b,e);
    }
    // hallando mayor
    map<int,int> mapa;
    map<int,int>::iterator it;
    REP(i,n){
      mapa[find(i)]++;
      //      printf("%d%c",p[i],i==n-1?10:32);
    }
    int maxi=1;
    for(it=mapa.begin();it!=mapa.end();it++){
      maxi=max(maxi,(*it).second);
    }
    P(maxi);
    
  }
  return 0;
}
