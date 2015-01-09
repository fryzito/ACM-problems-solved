#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,A[10000];
int main(){
  scanf("%d\n",&n);
  for(int i=0;i<n;i++){
    scanf("%d\n",&A[i]);
  }
  sort(A,A+n);
  for(int i=0;i<n;i++){
    printf("%d\n",A[i]);
  }
  return 0;
}
