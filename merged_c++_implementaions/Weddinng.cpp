//problema del uva (11450 - Wedding shopping) sacar el maximo dinero al comprar objetos de un tipo
#include<cstdio>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
#define REP( i, a, b) for(int i = int(a); i < int(b); i++)
#define ALL(x) (x).begin(),(x).end()
#define dbg(x) cout << #x << " = " << x << "\n";
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
	int tc, a, b, c, n;
	cin >> tc;
	while (tc--) {
		int cont = 0;
		vector < vector <int> > v;
		vector < int > vn;
		bool firts = true;
		cin >> a >> b;
		for(int i = 0; i < b; i++) {
			cin >> c;
			vector < int > vn;
			for (int j = 0; j < c; j++) {
				cin >> n;
				vn.pb(n);
			}
			sort (ALL(vn));
			v.pb(vn);
		}
		int k = v[0].size() -1; int j = 0, g;
		while ( 1 ) {
			if(firts) {
				REP(i,0,b) {
					cont += v[i][v[i].size() - 1];
					REP(g,0,v[i].size()) { cout << " " <<v[i][g] ; }
					cout << endl;
				}
				firts = false;
				if (cont <= a) break;
			}
			else {
				if (k == 0) { j++; k = v[j].size() - 1;  }
				if (j == b) break;
				cont -= v[j][k]; k--;
				cont += v[j][k];
				dbg(cont);
			}
			if (cont <= a) break;
		}
		if ( cont > a )
			cout <<"no solution" << endl;
		else
			cout << cont << endl;
	}
}
