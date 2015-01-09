#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <algorithm>
#define dbg(x) cout << #x << " = " << x <<"\n";
#define write(v) for (int i = 0; i < v.size();i++) {cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second << endl;}
using namespace std;
int main() {
	int n,m,q,I,F,W;
	cin >> n >> m >> q;
	while (n || m || q) {
		vector< pair< pair<int,int >,int > > v;
		for (int i = 0; i < q; i++) {
			cin >> I >> F >> W;
			v.push_back(make_pair(make_pair(I, F),W));
		}
		sort (v.begin(),v.end());
		
		cout << endl;
	cin >> n >> m >> q;
	}
}
