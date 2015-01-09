#include <cstdio>
#include <iostream>
#include <vector>
#define pb push_back
using namespace std;
int k[41];
vector<int> fibonacci(int n) {
	k[0]=1;
	k[1]=1;
	for(int i=2;i<41;i++) k[i] = k[i-1]+k[i-2];
	vector<int> ans;
	if(n==0) {
		ans.pb(0);
		ans.pb(1);
		return ans;
	} else if(n==1) {
			ans.pb(0);
			ans.pb(1);
			return ans;
		}
	ans.pb(k[n-2]);
	ans.pb(k[n-1]);
	return ans;
}
int main () {
	int n;
	scanf("%d",&n);
	vector<int> fib = fibonacci(n);
	printf("%d %d\n",fib[0],fib[1]);
	for(int i=0; i <=n ; i++) cout << k[i]<<" ";
	cout << endl;
	return 0;
}
