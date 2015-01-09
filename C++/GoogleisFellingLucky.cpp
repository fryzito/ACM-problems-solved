#include <cstdio>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#define mp make_pair
#define pb push_back
using namespace std;
int main() {
	int n, nro; string str;
	cin >> n;
	for(int i=0; i<n; i++) {
		vector<pair<int,string> > v; int mayor = -1;
		for(int j=0; j<10; j++) {
			cin >> str >> nro;
			v.pb(mp(nro,str));
			mayor =max(mayor,nro);
		}
		printf("Case #%d:\n",i+1);
		for(int j=0; j<10;j++) {
			if(v[j].first == mayor)
				cout << v[j].second << endl;
		}
	}
	return 0;
}
