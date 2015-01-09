#include <cstdio>
#include <sstream>
#include <iostream>
#include <stack>
using namespace std;
char str[100];
int main(){
  scanf("%[^\n]\n",str);
  string s(str);
  istringstream ss(s);
  stack<char> pila;
  string letra;
  string rpta="";
  while(ss >> letra){
    if(isdigit(letra[0])){
      rpta+=letra;
    } else {
      if(letra[0]==')'||letra[0]=='(') {
	
      } else {
	if(){}
      }
    }
  }
  printf("%s\n",str);
  return 0;
}
