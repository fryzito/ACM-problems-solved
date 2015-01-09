#include <cstdio>
#include <iostream>
#include <algorithm>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main() {
	int n, m;
	cin >> n;
	while(n--) {
		int id;
		cin >> id;
		int w[id+1], v[id+1];
		for(int i = 1; i <= id; i++) {
			cin >> v[i] >> w[i];
		}
		cin >> m; int c[m];
		for(int i = 0; i < m; i++) {
			cin >> c[i];
		}
		int sum = 0;
		for (int k = 0; k < m; k++) {
			int value[id+1][c[k]+1];
			
			for(int i = 0; i <= id; i++) value[i][0] = 0;
			for(int i = 0; i <= c[k]; i++) value[0][i] = 0;
			
			for(int i = 1; i <= id; i++) {
				for (int j = 1; j <= c[k]; j++) {
					if (w[i] > j)
						value[i][j] = value[i-1][j];
					else
						value[i][j] = max(value[i-1][j],v[i]+value[i-1][j- w[i]]);
				}
			}
			sum += value[id][c[k]];
		}
		
		/*cout << endl;
		for(int i = 0; i <= id; i++) {
			for(int j = 0; j <= mayor; j++)
				cout << value[i][j] << " ";
			cout << endl;
		}*/
		cout << sum << endl;
	}
	return 0;
}
