#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define CLR( a, b) memset( a, b,sizeof a) /*{ 0,-1,120 } */
#define  N 1000
using namespace std;
int matriz[N][N];
int colors[N][N];
int main() {
	int m,n,maxi = 0;
	while(cin >> m, cin >> n) {
		for (int j = 0; j < m; j++) {
			for (int i = 0; i < n; i++) {
				cin >> matriz[i][j];
				colors[i][j] = 1;
			}
		}
		for (int j = 1; j < m; j++) {
			for (int i = 1; i < n; i++) {
				if(matriz[i][j] == matriz[i][j-1] && matriz[i][j-1] == matriz[i-1][j-1] && matriz[i-1][j-1] == matriz[i-1][j] && matriz[i-1][j] == matriz[i][j] ) {
					colors[i][j] = min(min(colors[i-1][j],colors[i][j-1]),colors[i-1][j-1]) + 1;
				}
			}
		}
		for (int j = 1; j < m; j++) {
			for (int i = 1; i < n; i++) {
				if (maxi < colors[i][j]) {
					maxi = colors[i][j];
				}
			}
		}
		cout << maxi <<endl;
	}
}
