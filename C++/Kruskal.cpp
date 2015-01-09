#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#define pb push_back
#define mp make_pair
#define MAXN 100
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int P[MAXN];
int find(int i) {return (P[i] == -1 ? i : P[i] = find(P[i])); }
void join(int i, int j) {if(find(i) != find(j)) P[find(i)] = find(j); }
void initUF(int n) { fill(P,P+n,-1); }
vector<pair<int,int> > AGM;

int kruskal(vector<pair<int,pair<int,int> > > ejes, int n) {
	sort(ejes.begin(),ejes.end());
	initUF(n);
	int u = 0;
	long long t = 0;
	for(int i = 0; i<ejes.size();i++)
	if(find(ejes[i].second.first) != find(ejes[i].second.second)) {
		u++;
		t += ejes[i].first;
		AGM.pb(mp(ejes[i].second.first,ejes[i].second.second));
		if (u == n-1)
			return t;
		join(ejes[i].second.first,ejes[i].second.second);
	}
	return -1;
}

int main() {
	int na, w, ini, to, nodos;
	scanf("%d",&nodos);
	vector<pair<int,pair<int,int> > > aristas;
	scanf("%d",&na);
	for(int i = 0; i < na; ++i) {
		scanf("%d %d %d",&w,&ini,&to);
		aristas.pb(mp(w,mp(ini,to)));
	}
	printf("Costo del AGM es: %d\n",kruskal(aristas,nodos));
	
	printf("El AGM tiene las siguientes aristas: \n");

	for(int i = 0; i < AGM.size(); ++i) {
		printf("%d %d\n",AGM[i].first,AGM[i].second);
	}
	return 0;
}

