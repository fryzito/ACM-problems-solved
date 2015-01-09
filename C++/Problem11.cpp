#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
  long int A[20][20];
  for(int i=0; i<20; i++)
    for(int j=0; j<20; j++)
      scanf("%ld",&A[i][j]);
  long int sum=0;
  for(int i=0; i<20; i++)
    for(int j=3; j<20; j++)
      sum = max(sum,A[i][j-3]*A[i][j-2]*A[i][j-1]*A[i][j]);

  for(int i=0; i<20; i++)
    for(int j=3; j<20; j++)
      sum = max(sum,A[j-3][i]*A[j-2][i]*A[j-1][i]*A[j][i]);

  for(int i=3; i<20; i++)
    for(int j=3; j<20; j++)
      sum = max(sum,A[i-3][j-3]*A[i-2][j-2]*A[i-1][j-1]*A[i][j]);

  for(int i=3; i<20; i++)
    for(int j=3; j<20; j++)
      sum = max(sum,A[i][j-3]*A[i-1][j-2]*A[i-2][j-1]*A[i-3][j]);

  printf("%ld\n",sum);
  return 0;
}
