#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;
int main() {
  int n; string str; char aux;
  scanf("%d\n",&n);
  for(int i=0; i<n; i++) {
    stack<char> pila;
    getline(cin,str);
    for(int j=0; j<str.size(); j++) {
      if(pila.empty()) pila.push(str[j]);
      else {
	aux = pila.top();
	if((aux == '(' && str[j]==')')||(aux=='['&& str[j]==']'))
	  pila.pop();
	else
	  pila.push(str[j]);
      }
    }
    if(pila.empty())
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}
