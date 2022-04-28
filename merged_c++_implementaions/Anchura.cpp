#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
map <char,vector<char> > adj;
map <char,bool> marca;
int main() {
	char nodo;
	char n1,n2;
	cin >> nodo;
	while(cin >> n1,cin >> n2) {
		adj[n1].push_back(n2);
		marca[n1] = false;
	}
	queue<char> q; q.push(nodo);
	marca[nodo] = true;
	cout << nodo << endl;
	while(!q.empty()) {
		char u = q.front(); q.pop();
		for(int i = 0 ; i < adj[u].size();i++) {
			if(!marca[adj[u][i]]) {
				marca[adj[u][i]] = true;
				cout << adj[u][i] << endl;
				q.push(adj[u][i]);
			}
		}
	}
	
	return 0;
}

