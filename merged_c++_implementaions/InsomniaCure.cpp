#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <cstring>
#define dbg(x) cout << #x << " = " << x << endl;
#define MAXN 100000
using namespace std;
bool vivos[MAXN];	
int main() {
	int k, l, m, n, d, cont = 0;
	cin >> k;
	cin >> l;
	cin >> m;
	cin >> n;
	cin >> d;
	memset(vivos,false,sizeof(vivos));
	for(int i = k; i <=d; i += k) vivos[i] = true;
	for(int i = l; i <=d; i += l) vivos[i] = true;
	for(int i = m; i <=d; i += m) vivos[i] = true;
	for(int i = n; i <=d; i += n) vivos[i] = true;
	for(int i = 1; i <=d; i++) {
		if (!vivos[i])
			cont++;
	}
	cout << d-cont << endl;
	return 0;
}

