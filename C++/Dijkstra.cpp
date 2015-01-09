#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <utility>
#include <cstdio>
#define INF 99999
using namespace std;
vector<int> dijkstra(vector<pair<int,int> > &lista,int nodoInicial)
 {
	 int n = lista.size();
	 vector<int> dist(n,INF);
	 vector<bool> toc(n,false);
	 dist[nodoInicial] = 0;
	 int t = nodoInicial;
	 for(int i=0;i<n;i++){
		toc[t] = true;
		 for(int i=0;i<lista[t].size();i++)
			dist[lista[t][i].first] = min(dist[lista[t][i].first], dist[t]+lista[t][i].second);
		 for(int i=0;i<n;i++)
			if(toc[t]==true||(toc[i]==false&&dist[i]<dist[t]))
				t = i;
	 }
	 return dist;
 }
int main() {
	pair <int,int> p;
	vector<pair <int,int> > v;
	vector<int> aux;
	aux = dijkstra(v,3);
	cout << "Hello world\n";	
}

