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
#define SC(n) scanf("%d",&n);
#define S(n) scanf("%d\n",&n);
#define MAXN 1004
#define SS(str) scanf("%[^\n]\n",str);
using namespace std;
int n;
bool iscor(string str){
  stack<char> pila;
  REP(i,str.size()){
    //    dbg(str[i]);
    if(str[i]=='(' or str[i]=='['){
      pila.push(str[i]);
    } else {
      if(str[i]==')'){
	      if(!pila.empty()&&pila.top()=='('){
	        pila.pop();
	      } else{
	        return false;
	      }
      } else {
        // necesariamenet ]
        if(!pila.empty()&&pila.top()=='['){
          pila.pop();
        } else{
          return false;
        }
      }
    }
  }
  return (pila.empty());
}
string str1;
int main(){
  SC(n);    getline(cin,str1);
  while(n--){
    getline(cin,str1);
    //    dbg(str1);
    if((string)str1=="") {
      printf("Yes\n");
      continue;
    }
    printf("%s\n",iscor(str1)?"Yes":"No");
  }
  return 0;
}
