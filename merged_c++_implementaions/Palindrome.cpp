#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#define dbg(x) cout << #x << " = " << x << endl;
#define MAX 1000

using namespace std;
int dp[MAX][MAX];
string cad;
int palindrome(int i,int j){
	if(i>j) return 0;
	if(dp[i][j] != 0) return dp[i][j];
	if(cad[i] == cad[j]){
		if(i == j)
			return (dp[i][j] = 1 + palindrome(i+1,j-1));
		else
			return(dp[i][j] = 2 + palindrome(i+1,j-1));
	}
	return (dp[i][j] = max(palindrome(i+1,j),palindrome(i,j-1)));

}

int main() {
	cin >> cad;
	memset(dp,0,sizeof dp);
	printf("%d\n",palindrome(0,cad.size()-1));
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j< 10; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

