#include<bits/stdc++.h>
using namespace std;
int a,b;
int gcd(int a,int b){
  int tmp;
  while(b!=0){
    tmp=a%b;
    a=b;
    b=tmp;
  }
  return a;
}
int MCD(int a,int b){
  if(b==0) return a;
  return MCD(b,a%b);
}
int main(){
  a = 2535;
  b = 1255;
  int mcd = gcd(a,b);
  printf("%d\n",mcd);
  printf("%d\n",__gcd(a,b));
  printf("%d\n",MCD(a,b));
}
