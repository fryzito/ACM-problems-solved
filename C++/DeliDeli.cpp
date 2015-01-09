#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

#define pb push_back
#define mp make_pair

#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a,b,sizeof(a))
#define REPN(x,a,b) for (int x=a; x<b;++x)
#define REP(x,b) REPN(x, 0, b)
int main () {
	int l, r, i, j;
	string str1, str2;
	map <string,string> mapa;
	vector <string> v;
	cin >> l >> r;
	REP(i,l) {
		cin >> str1 >> str2;
		mapa[str1] = str2;
	}
	REP(j,r) {
		cin >> str1;
		v.pb(str1);
	}
	REP(i,r) {
		//for ( map<string,string>::iterator it = mapa.begin(); it != mapa.end(); it++) {
			bool scribio = false;
			if (mapa.find(v[i]) != mapa.end()) {
				scribio = true;
				cout << mapa.find(v[i])->second <<endl;
			}
			else if (((v[i][v[i].size()-2] != 'a' ) && (v[i][v[i].size()-2] != 'e' ) && (v[i][v[i].size()-2] != 'i' ) && (v[i][v[i].size()-2] != 'o' ) && (v[i][v[i].size()-2] != 'u' ) ) && (v[i][v[i].size()-1] == 'y')) {
					v[i][v[i].size()-1] = 'i';
					v[i] += 'e';
					v[i] += 's';
			}
			else if ( (v[i][v[i].size()-1] == 'o') || (v[i][v[i].size()-1] == 's') || (v[i][v[i].size()-1] == 'x') || ((v[i][v[i].size()-2] == 'c') && (v[i][v[i].size()-1] == 'h')) || ((v[i][v[i].size()-2] == 's') && (v[i][v[i].size()-1] == 'h')) ) {
					v[i] += 'e';
					v[i] += 's';
			}
			else {
				v[i] += 's';
			}
			if(!scribio)
				cout << v[i] <<endl;
		
	}
	return 0;
}
