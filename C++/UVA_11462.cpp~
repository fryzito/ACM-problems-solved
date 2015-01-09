#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <utility>
#define pb push_back
#define REPN(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) REPN(i,0,n)
#define SZ(v) v.size()
#define dbg(x)cout<<#x<<"="<<x<<endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
using namespace std;
int n;
string s1="`1234567890-=";
string s2="QWERTYUIOP[]\\";
string s3="ASDFGHJKL;'";
string s4="ZXCVBNM,./";
string s5=" ";
char str[100005];
int main(){
  vector<string> v;
  v.pb(s1);
  v.pb(s2);
  v.pb(s3);
  v.pb(s4);
  while(scanf("%[^\n]\n",str)==1){
    //dbg((string)str);
    REP(i,strlen(str)){
      //dbg(str[i]);
      if(str[i]==' ') { putchar(' ');continue;}
      REP(j,v.size()){
      	REP(k,v[j].size()){
	  //dbg(v[j][k]);
      	  if(str[i]==(char)v[j][k]){
	    //dbg(v[j][k]);
	    //dbg(v[j][k-1]);
	    cout<<v[j][k-1];
      	    //k=v[j].size();
      	    //j=v.size();
	    break;
	    //dbg2(k,j);
      	  }
      	}
	//dbg(true);
      }
    }
    putchar('\n');
  }
  
  return 0;
}
