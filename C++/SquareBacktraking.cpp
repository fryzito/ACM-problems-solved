#include <cstdio>
#include <iostream>
#include <cstring>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
bool done;
int goal;
int a[50];
int usd[50];
int n;
int L;
void F(int pos, int sum, int g){
	if ( done ) return;
	if ( sum > goal ) return;
	if ( g == 4 ) { done = true; return; }
	if ( sum == goal ) F( 0, 0, g + 1);
	for(int i = pos; i < n; i++){
		if (usd[i]) continue;
		usd[i] = true;
		F( i, sum + a[i], g );
		usd[i] = false;
	}
}
int main() {
	int m;
	cin >> m;
	while(m--) {
		cin >> n;
		L = 0;
		memset(usd,0,sizeof(usd));
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			L += a[i];
		}
		goal = L/4;
		done = false;
		F(0,0,0);
		if (done)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}
