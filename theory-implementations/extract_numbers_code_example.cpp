#include <iostream>
#include <cstdio>
#include <algorithm>
#include <sstream>
#include <string>
#include <string.h>

using namespace std;

int main(){
  
  string str = "aisdfhoiqwei352345234@#$%^$@345345%^@#$^";
  string ans = "";
  for(int i=0;i<strlen(str.c_str());i++){
    if(isdigit(str[i]))
      continue;
    else
      ans += str[i];
  }
  
  printf("%s",ans.c_str());
  
  return 0;
}
  
