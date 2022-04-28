#include <cstdio>
#include <cstring>
int memo[1000001];
using namespace std;
int f(int n) {
	if(memo[n]!=-1) return memo[n];
	if(n>100)
		return n-10;
	else
		return memo[n]=f(f(n+11));
}
int main() {
	int n;
	memset(memo,-1,sizeof memo);
	while(scanf("%d",&n)==1&&n) {
		printf("f91(%d) = %d\n",n,f(n));
	}
	return 0;
}