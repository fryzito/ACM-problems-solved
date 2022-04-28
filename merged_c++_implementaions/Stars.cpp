#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#define CLR(a,b) memset(a,b,sizeof(a))
using namespace std;
int main() {
	int n;  vector <pair <int,int> > v;
	int x, y;
	cin >> n;
	int count[n];	int rpta[n+1];
	CLR(count,0);
	CLR(rpta,0);
	for(int j = 0; j < n; j++) {
		cin >> x >> y;
		v.push_back(make_pair(x,y));
		for(int i = 0; i < v.size(); i++) {
			if((y >= v[i].second) && (x >= v[i].first))
				count[j]++;
		}
	}
	for (int k = 0; k < n; k++) {
		rpta[count[k]]++;
	}
	for (int k = 1; k <= n; k++) {
		cout << rpta[k] << endl;
	}
}
