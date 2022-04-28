#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
  int n, num, numero;
  scanf("%d\n",&n);
  while(n--) {
    scanf("%d",&num);
    int A[num], sum = 0, sum1=0;
    for(int i=0; i<num; i++) {
      scanf("%d",A+i);
    }

    sort(A,A+num);
    int mediana = num/2;
    for(int i=0; i<mediana; i++) {
      sum += abs(A[i] - A[mediana]);
    }
    for(int i=mediana+1; i<num; i++) {
      sum += abs(A[i] - A[mediana]);
    }
    printf("%d\n",sum);

  }
  return 0;
}
