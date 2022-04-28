/*
 ID: edusanche1
 PROG: gift1
 LANG: C++
*/
#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <string>

#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) //traverse containers

using namespace std;

int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
	int n;
	fin >> n;
	string nomes;
	map <string, int> mapa;
	vector <string> v;
	for (int i = 0; i < n; i++) {
		fin >> nomes;
		mapa[nomes] = 0;
		v.push_back(nomes);
	}
	
	for (int i = 0; i < n; i++) {
		fin >> nomes;
		int a, b;
		fin >> a >> b;
		mapa[nomes] -= a;
		if (b != 0) mapa[nomes] += a % b;
		for (int j = 0; j < b; j++) {
			fin >> nomes;
			mapa[nomes] += a / b;
		}
	}
	
	for (int i = 0; i < n; i++) {
		fout << v[i] << " " << mapa[v[i]] << "\n";
	}
	return 0;
}
