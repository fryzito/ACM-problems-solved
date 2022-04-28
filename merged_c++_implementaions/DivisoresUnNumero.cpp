#include <cstdio>
#include <iostream>
#define MAXN 1000000
typedef long long ll;
using namespace std;
int spc[MAXN];
void initCriba() {
	memset(spc,true,sizeof(spc));
	for (ll i = 2; i < MAXN; i++)
		if(spc[i])
			for (ll j = 2*i; j < MAXN; j += i )
				spc[j] = false;
}
int main () {
	initCriba();
	ll a, b;
	while (cin >> a, cin >> b) {
		/*for (ll i = a; i <= b; i++) {
			if (spc[i])
				cout << i << " ";
		}*/
		cout << spc[b];
		cout << endl;
	}
	return 0;
}
