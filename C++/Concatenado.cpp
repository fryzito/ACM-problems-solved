#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#define dbg(x) cout << #x << " = " << x << "\n";
using namespace std;
int main () {
	int t, n, m;
	cin >> t;
	for (int g = 0; g < t; g++) {
		int count = 0;
		cin >> n >> m;
		string str1[n]; string str2[m];
		vector <string> v;
		for (int j = 0; j < n; j++) {
			cin >> str1[j];
		}
		for (int k = 0; k < m; k++) {
			cin >> str2[k];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				v.push_back(str1[i] + str2[j]);
			}
		}
		sort (v.begin() , v.end() );
		int zi = v.size();
		if (zi > 1) {
			for (int c = 0; c < zi; c++) {
					if (!(v[c%zi] == v[(c+1)%zi]))
						count++;
				}
			printf("Case: %d: %d\n",g+1,count);
		}
		else {
			printf("Case: %d: %d\n",g+1,1);
		}			
	}
}
