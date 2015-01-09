#include <cstdio>
#include <iostream>
#define dbg(x) cout << #x << " = " << x << endl
#define ll long long int
using namespace std;

ll fact(int n) {
  if(n<=1) return 1;
  ll rpta = 1;
  for(int i=2; i<=n; i++)
    rpta *= i;
  return rpta;
}

int main() {
  int n, k, ni;
  ll ans, ans1;
  while(scanf("%d %d\n",&n,&k)==2) {
    ans = 1;
    for(int i=0; i<k; i++) {
      scanf("%d",&ni);
      ans *= fact(ni);
    }
    ans1 = fact(n);
    printf("%lld\n",ans1/ans);
  }
  return 0;
}
