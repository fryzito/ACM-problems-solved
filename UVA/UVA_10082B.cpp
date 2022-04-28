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
#define MAXN 100005
#define SS(str) scanf("%[^\n]\n",str)
#define P(n) printf("%d\n",n)
using namespace std;
string s1="`1234567890-=";
string s2="QWERTYUIOP[]\\";
string s3="ASDFGHJKL;'";
string s4="ZXCVBNM,./";
string str;
int main(){
  vector<string> v;
  v.pb(s1);
  v.pb(s2);
  v.pb(s3);
  v.pb(s4);
  while(getline(cin,str)){
    REP(i,str.size()){
      if(str[i]==' '){putchar(' ');continue;}
      REP(j,v.size()){
	REP(k,v[j].size()){
	  if(str[i]==v[j][k]){
	    putchar(v[j][k-1]);
	  }
	}
      }
    }
    putchar('\n');
  }
  return 0;
}
