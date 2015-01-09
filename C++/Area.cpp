#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int[] Hallarrpta(int m, vector<pair<int,int> > v) {
	int correr[5];
	return correr;
}
int main() {
	int n;
	cin >> n;
	while (n--) {
		int m;
		cin >> m;
		pair <int, int> p;
		vector <pair <int,int> > v;
		int rpta[3];
		while (m--) {
			int x, y;
			cin >> x >> y;
			p = make_pair(x,y);
			v.push_back(p);
		}
		rpta = Hallarrpta(m,v);
		cout << " true" << endl;
	}
}
