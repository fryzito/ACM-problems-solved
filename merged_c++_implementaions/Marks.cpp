#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main() {
	int n, m, cont = 0;
	cin >> n >> m;
	char mat[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mat[i][j];
		}
	}
	int aux = -1;
	for(int k = 0; k < n; k++) {
		for (int j = 0; j < m; j++) {
			for (int i = 0; i < n; i++) {
				if( k != i ) {
					aux = max(aux,mat[i][j]-'0');
				}
			}
			if((mat[k][j]-'0') >= aux) {
				cont++;
				break;
			}
			aux = 0;
		}
	}
	cout << cont << endl;
	return 0;
}
