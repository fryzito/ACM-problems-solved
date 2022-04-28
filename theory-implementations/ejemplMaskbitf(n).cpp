#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<cstring>
#include<algorithm>
#include<sstream>
#define ll long long
#define vint vector<int>
#define f(i,x,y) for(int i=x;i<y;i++)
#define fd(i,y,x) for(int i=y;i>=x;i--)
#define clr(A,x) memset(A,x,sizeof(A))
#define oo (1<<30)
#define eps (1e-9)
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define pb push_back
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int v[4] = {1,3,4,5};
int n = 4;
int c = 0;
int M[4][4];
int n = 4;
int memo[10][1<<10];
memset(memo,-1,sizeof(memo));

// complegidad O(n * n * 2^n)
// 10 * 10 * 1024 = 102400

int f(int x, int mask) {
  if(x == n-1) {  // caso Base
    for(int i=0; i<n; i++){
      if((mask>>i) & 1 != 0) {
	s = M[x][i];
      }
    }
    memo[x][mask] = s;
  }
  else {
    s = -100000000;
    for (int i=0; i<n;i++) {
      if(((mask>>i) & 1) != 0) {
	int g=0;
	g = M[x][i] + f(x+1,mask - (1<<i) );
	s = max(s,g);
      }
    }
    return memo[x][mask];
  }
}
// iterativo con un solo arreglo de forma regresiva
void iterativa2 () {
  for (int mask = (1<<n) -1; mask >= 0; mask--) {
    dp[mask] = -1000000000;
    x= 0;
    for (int i=0; i<n; i++) {
      if(mask & (1<<i)) {
	x++;
      }
    }
    dp[mask] = -100000000;
    for(int i=0; ) {

    }
  }
}
//iterativamente
int dp[10][1<<10];
void iterativamente() {
  x = n-1;
  for(int mask = 0; mask < (1<<n); mask++) {
    for(int i=0; i<n; i++) {
      if((mask & (1<<i)) == 0) {
	dp[n-1][mask] = M[n-1][i];
      }
    }
  }
  for(int i=n-2; i>=0; i--) {
    for(int mask = 0; mask < (1<<n); mask++) {
      dp[x][mask] = -10000000000;
      for(int i=0; i<n; i++) {
	if (((i<<i)& mask) == 0) {
	  g = M[x][i] + dp[][mask | (1 << i)]
	}
      }
    }
  }
}




int main(){
  // f(x = 0, mask = 111111...1111)
  
  return 0;
}
