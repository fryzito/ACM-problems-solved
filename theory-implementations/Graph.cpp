#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <stack>
#include <utility>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main() {
	int n, m;
	cin >> n;
	queue<int> cola;
	for (int i = 0; i < n; i++) {
		cin >> m;
		cola.push(m);
	}
	while(!cola.empty()) {
		cout << cola.front() << endl;
		cola.pop();
	}
  return 0;
}
