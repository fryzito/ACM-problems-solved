#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>
#include<cstdlib>
#define dbg(x) cout << #x << " = " << x <<"\n";
using namespace std;
int main() {
	bool joly = true;
	int n;
	int are[3001];
	while (cin >> n) {
		joly = true;
		
		for (int i = 0; i < n ; i++) 	cin >> are[i];
		
		for (int j = 1; j < n; j++) {
			if(abs(are[j] - are[j-1]) >= n) {
				joly = false;
			}
		}
		
		if (joly) 
			cout << "Jolly" <<endl;
		else
			cout << "Not jolly" <<endl;
	}
}
