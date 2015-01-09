#include<iostream>
#include<cstdio>

using namespace std;

int main(){
  char c;
  while(scanf("%c",&c)==1){
    if(c=='\n')
      printf("\n");
    else{
      char aux=c-7;
      printf("%c",aux);
    }
  }
}
