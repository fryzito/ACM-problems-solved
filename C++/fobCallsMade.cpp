#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int dp[42];
int fibonacci(int n) {
	if(n == 0) return dp[0] = 0;
	if(n == 1) return dp[1] = 1;
	if(dp[n]!= -1) return dp[n];
	return dp[n] = fibonacci(n-1) + fibonacci(n-2);
}
int main() {
	int n;
	memset(dp,-1,sizeof dp);
	dp[-1] = 1; dp[0] = 0;
	scanf("%d",&n);
	printf("%d %d\n",dp[n-1],fibonacci(n));
	return 0;
}
