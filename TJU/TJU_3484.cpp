#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int A[100005];
int main(){
	int nc,n;scanf("%d\n",&nc);
	while(nc--){
		scanf("%d",&n);
		for(int i=0;i<n;i++) {
			scanf("%d",&A[i]);
		}
		sort(A,A+n);
		int sum=0;
		for(int i=0;i<n-1;i++){
			sum+=(A[i]);
		}
		printf("%d\n",sum);
	}
	return 0;
}
