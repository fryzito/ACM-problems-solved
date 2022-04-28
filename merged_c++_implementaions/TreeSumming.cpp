#include <cstdio>
#include <stack>
#include <cstring>
#include <string>
#include <iostream>
#define dbg(x) cout << #x << " = " << x << endl
using namespace std;
int N; string str;
bool search(int ini, int fin, int sum) {
  if(ini+1 == fin) return false;
  string str2 = "";
  int i,n;

  for(i=ini+1; str[i]!='(';i++)
    str2.push_back(str[i]);
  sscanf(str2.c_str(),"%d",&n);
  int balance = 0, j=i;


  do {
    if(str[j]=='(')
      balance--;
    else if(str[j]==')')
      balance++;
    j++;
  }while (balance != 0);
 
  if(j==i+2 && fin==j+2)
    return sum+n == N;
  return search(i,j-1,sum+n) || search(j,fin-1,sum+n);
}
int main() {
  char sub;
  
  while(scanf("%d ",&N)==1) {

    int balance = 0;
    str = "";
    do {
      sub = getchar();
      if(sub == '(') balance++;
      else if(sub == ')') balance--;
      if(sub!=' ' && sub!= '\n') str += sub;
    }while (balance != 0);

    if(search(0,str.length()-1,0))
      printf("yes\n");
    else
      printf("no\n");
  }
  return 0;
}
