#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#define ll long long int
#define pb push_back
using namespace std;
int main() {
  vector<ll> v;
  vector<ll>::iterator it;
  for(int i=0 ; i<=1002; i++) {
    v.pb(i*i);
  }
  for (int a=0; a<1000-1; a++) {
    for (int b=a+1; b<1000; b++) {
      ll aux = v[a]+v[b];
      for(int c=b+1; c<=1000; c++) {
	if(aux == v[c] && (a + b + c == 1000)) {
	  printf("%lld %lld %lld\n",v[a],v[b],v[c]);
	  printf("%d %d %d\n",a,b,c);
	  cout << a*b*c << endl;
	}
      }
    }
  }
  return 0;
}
