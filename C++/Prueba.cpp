#include <bits/stdc++.h>
using namespace std;
int main()
{
  int A[5] = {30,6,6,6,6};
  int aux = 0;
  for(int i=1;i<5;i++){
   aux =  __gcd(aux,A[i]);
  }
  printf("%d\n",aux);
}
