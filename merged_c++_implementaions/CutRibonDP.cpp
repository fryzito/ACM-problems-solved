#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdio>
#define MAX 4010
using namespace std;
int dp[MAX]; vector < int > v(3,3);

int main() {
  int n;
  cin >> n ;
  int acumulador = 0;
  for(int i=0; i< 3; i++) {
    cin >> v[i];
  }
  memset(dp,-1,sizeof dp); dp[0] = 0;
  for(int i = 1;i <= n ;i++){
    for(int j = 0;j < 3;j++){
      if((i - v[j]) < 0) continue;
      if(dp[(i - v[j])] != -1){
	if(dp[i - v[j]] + 1 > dp[i]) dp[i] = dp[i - v[j]]+1;
      }
    }
  }
  for(int i = 1;i <= n ;i++){
    cout << dp[i] <<" ";
  }
  cout << endl;
  printf("%d\n",dp[n]);
  return 0;
}
