#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#define dbg(x) cout << #x << " = " << x << endl;
#define MAXN 1000
using namespace std;
int INF = (1<<30);
int n;
int dist[MAXN];
void Dijkstra(vector<pair<int,int> > lista[], int nodoInicial) {
	bool toc[n];
	memset(dist,120,sizeof(dist)); // fill array with big num
	//dbg(dist[0]);
	memset(toc,0,sizeof(toc));
	dist[nodoInicial] = 0;
	int t = nodoInicial;
	for(int k = 0; k < n; k++) {
		toc[t] = true;
		for(int i = 0; i < lista[t].size(); i++)
			dist[lista[t][i].first] = min(dist[lista[t][i].first],dist[t]+lista[t][i].second);
		for(int i = 0; i < n;i++)
			if(toc[t] == true || (toc[i] == false && dist[i] < dist[t]))
				t = i;
	}
	return;
}
int main() {
	int ini, to, w, nodoini;
	cin >> n;
	dbg(n);
	vector<pair <int,int> > lista[n];
	cin >> nodoini;
	dbg(nodoini);
	while (cin >> ini,cin >> to,cin >> w) {
		lista[ini].push_back(make_pair(to,w));
		//lista[to].push_back(make_pair(ini,w));
		//INF += w;
	}
	
	Dijkstra(lista,nodoini);
	
	for(int i = 0; i<n;i++) {
		for(int j = 0; j<lista[i].size();j++)
			cout << lista[i][j].second << " ";
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		printf("El nodo %d esta a una distance %d de %d \n",i,dist[i],nodoini);
	}
	return 0;
}

