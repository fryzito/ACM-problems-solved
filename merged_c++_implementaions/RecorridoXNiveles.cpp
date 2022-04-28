#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
vector<pair<int,int> > Arb[200];
int main() {
	int n, u, v, w;
	scanf("%d",&n);
	for (int i = 0 ; i < n; i++) {
		scanf("%d %d %d",&u,&v,&w);
		Arb[u].push_back(make_pair(v,w));
	}
	return 0;
}
