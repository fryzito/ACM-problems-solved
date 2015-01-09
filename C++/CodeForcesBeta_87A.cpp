#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int n,a,b;scanf("%d\n",&n);
  int rpta=0,maximo=-1;
  for(int i=0;i<n;i++) {
    scanf("%d %d\n",&a,&b);
    rpta-=a;
    rpta+=b;
    maximo=max(maximo,rpta);
  }
  printf("%d\n",maximo);
  return 0;
}
