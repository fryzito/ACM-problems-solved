#include <cstdio>
#include <iostream>
#include <utility>
#include <map>
#include <vector>
using namespace std;
int main() {
	int nc, to, from, total_nodes;
	map< int,vector<int> > adyacencia;
	map< int, int > dist;
	while (cin >> nc && nc) {
		adyacencia.clear();
		for (int i = 0; i < nc; i++) {
			cin >> from >> to;
			adyacencia[from].push_back(to);
			adyacencia[to].push_back(from);
		}
		total_nodes = adyacencia.size();
	}
	return 0;
}
