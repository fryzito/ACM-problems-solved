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
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y) cout << #x << " = " << x << "  " << #y << " = " << y << endl;
#define MAXN 10000
int main() {
	string str;
	int k, i, j;
	cin >> str;
	cin >> k;
	
	map<char,int> mapa;
	REP(i,str.size()) {
		mapa[str[i]]++;
	}
	vector <pair <int , char> > vp;
	for ( map<char,int>::iterator it = mapa.begin(); it != mapa.end();it++) {
		vp.pb(mp(it->second,it->first));
	}
	sort (ALL(vp)); 
	
	//REP(j,vp.size()) dbg2(vp[j].first,vp[j].second);
	
	int cont = 0;
	int contador = vp[0].first;
	REPN(i,1,vp.size())
		if (contador <= k) {
			REP(j,str.size()) {
				if (str[j] == vp[i-1].second) str[j] = '1';
			}
			cont++;
			contador += vp[i].first;
		}
	
	if(contador <= k) {
			REP(j,str.size()) {
				if (str[j] == vp[vp.size()-1].second) str[j] = '1';
			}
			cont++;
		}
		
	cont = mapa.size() - cont;
		
	string str2 = "";
		REP(i,str.size()) {
			if(str[i] != '1') {
				str2 += str[i];
			}
		}
	
	cout << cont << endl;
	cout << str2 << endl;
	return 0;
}
