#include <cstdio>
#include <cstdlib>
#define ll long long
using namespace std;
ll changes = 0;
void mezcla(int* A, int ini, int med, int fin) {
  int vector[fin-ini+1];
  int i=ini;
  int j=med+1;
  int k=0;
  while(i<=med && j<=fin)
    if(A[i]<=A[j])
      vector[k++] = A[i++];
    else
      vector[k++] = A[j++], changes += med-i+1;
  while(i<=med) vector[k++] = A[i++];
  while(j<=fin) vector[k++] = A[j++];
  for(i=0; i<k; i++) A[ini+i] = vector[i];
}
void merge_sort(int* A,int ini, int fin) {
  if(ini < fin) {
    int med = (ini+fin)/2;
    merge_sort(A,ini,med);
    merge_sort(A,med+1,fin);
    mezcla(A,ini,med,fin);
  }
}
int main() {
  int n, A[500000];
  while(scanf("%d",&n)) {
    if(n==0) break;
    changes = 0;
    for(int i=0; i<n; i++)
      scanf("%d",A+i);
    merge_sort(A,0,n-1);
    printf("%lld\n",changes);
  }
  return 0;
}
