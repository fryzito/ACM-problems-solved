#include<cstdio>
#include<iostream>
#include<vector>
#include <algorithm>
#define dbg(x)cout<<#x<<"="<<x<<endl
using namespace std;
int A[102];
int main(){
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		scanf("%d ",&A[i]);
	}
	sort(A,A+n);
	for(int i=0;i<n;i++){
		if(i) printf(" %d",A[i]);
		else printf("%d",A[i]);
	}
	return 0;
}
