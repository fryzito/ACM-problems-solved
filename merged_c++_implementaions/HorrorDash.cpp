#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int T,N,C,maxi;
	cin >> T;
	for(int i = 1; i<=T; i++) {
		cin >> N;
		maxi = 0;
		for(int j=0; j<N; j++) {
			cin >> C;
			maxi = max(maxi,C);
		}
		printf("Case %d: %d\n",i,maxi);
	}
	return 0;
}
