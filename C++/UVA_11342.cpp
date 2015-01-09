#include <cstdio>
#include <set>
#include <ctime>
#include <iostream>
using namespace std;
#define dbg(x)cout<<#x<<"="<<x<<endl
#define S(x)scanf("%d\n",&x)
#define P(x)printf("%d\n",x)
struct T{
  int a,b,c;
  T(){a=-1;b=-1;c=-1;}
};
bool visited[50001];
T R[50001];
int A[250];
int main(){
  int n;S(n);
  int k;
  for(int i=0;i<=223;i++){
    A[i]=i*i;
  }
  int cont=0;
  for(int i=0;i<=223;i++){
    for(int j=i;j<=223;j++){
      if(A[i]+A[j]>50000) j=223;
      for(int l=j;l<=223;l++){
	if(A[i]+A[j]+A[l]<=50000){
	  if(visited[A[i]+A[j]+A[l]]==0){
	    R[A[i]+A[j]+A[l]].a=i;
	    R[A[i]+A[j]+A[l]].b=j;
	    R[A[i]+A[j]+A[l]].c=l;
	    visited[A[i]+A[j]+A[l]]=1;
	  }
	}
      }
    }
  }
  while(n--){
    S(k);
    if(!visited[k])
      printf("-1\n");
    else
      printf("%d %d %d\n",R[k].a,R[k].b,R[k].c);
  }
  return 0;
}
