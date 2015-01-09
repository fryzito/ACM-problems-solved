#include <cstdio>
#include <iostream>
#include <algorithm>
#define LL long long
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main() {
	int i , j, k, l;
	cin >> i >> j >> k >> l;
	while(i || j || k || l) {
		if(i==k && j == l) cout << 0 << endl;
		else if(abs(i-k) == abs(j-l)) cout << 1 << endl;
		else if(i == k) cout << 1 << endl;
		else if(j == l) cout << 1 << endl;
		else cout << 2 << endl;
		
		cin >> i >> j >> k >> l;
	}
	return 0;
}
