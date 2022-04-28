#include <cstdio>
#include <iostream>
#define MAXN 1003
#define dbg(x)cout<<#x<<"="<<x<<endl
#define EPS (1e-4)
using namespace std;
int A[MAXN];
int main(){
	int n;scanf("%d\n",&n);
	int a,b,cases=0;
	while(n--){
		scanf("%d\n",&a);
		scanf("%d\n",&b);
		if(a>b) swap(a,b);
		int sum=0;
		for(int i=a;i<=b;i++){
			if(i&1) sum+=i;
		}
		printf("Case %d: %d\n",++cases,sum);
	}
	
	return 0;
}