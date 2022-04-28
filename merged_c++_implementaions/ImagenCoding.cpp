#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
map <char,int> mapa;
void init() {

	mapa['A'] = 0; mapa['B'] = 0; mapa['C'] = 0; mapa['D'] = 0;
	mapa['E'] = 0; mapa['F'] = 0; mapa['G'] = 0; mapa['H'] = 0;
	mapa['I'] = 0; mapa['J'] = 0; mapa['K'] = 0; mapa['L'] = 0;
	mapa['M'] = 0; mapa['N'] = 0; mapa['O'] = 0; mapa['P'] = 0;
	mapa['Q'] = 0; mapa['R'] = 0; mapa['S'] = 0; mapa['T'] = 0;
	mapa['U'] = 0; mapa['V'] = 0; mapa['W'] = 0; mapa['X'] = 0;
	mapa['Y'] = 0; mapa['Z'] = 0;
}
int main() {
	int x, r, c, m, n, rpta = 0;
	char cha;
	vector<int> v;
	cin >> x;
	for ( int k = 0; k < x; k++) {
		cin >> r >> c >> m >> n;
		init();
		for ( int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> cha;
				mapa[cha]++;
			}
		}
		for(map<char,int>::iterator it = mapa.begin(); it != mapa.end();it++) {
			v.push_back((*it).second);
		}
		sort(v.begin(),v.end());
		int i = v.size()-1;
		int cont = 0;
		while(v[v.size()-1]== v[i]) {
			rpta += v[i] * m;
			cont += v[i];
			i--;
		}
		rpta += ((r*c)- cont)*n;
		printf("Case %d: %d\n",k+1,rpta);
		rpta = 0; cont = 0;
		v.clear();
	}
	return 0;
}

