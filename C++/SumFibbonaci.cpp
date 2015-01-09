#include <cstdio>
#include <iostream>
#include <vector>
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl
using namespace std;
int main () {
	int sum = 0;
	vector<int> v;
	v.pb(1);
	v.pb(2);
	for(int i=2; i<4000; i++) {
		v.pb(v[i-1]+v[i-2]);
		if(v[i]>4000000)
			break;
	}
	for (int i=0; i< v.size(); i++) {
		if(v[i]%2 == 0) {
			sum+=v[i];
		}
	}
	cout << sum << endl;
	return 0;
}
