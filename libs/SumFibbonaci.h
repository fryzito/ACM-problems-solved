#include <cstdio>
#include <iostream>
#include <vector>
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
using namespace std;
int main () {
	vector<int> v;
	v.pb(1);
	v.pb(2);
	for(int i=2; i<4000; i++) {
		v.pb(v[i-1]+v[i-2]);
		dbg(v[i]);
	}
	
	return 0;
}
