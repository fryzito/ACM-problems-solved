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
#include <cstddef>
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
#define oo (1<<30)
long long toi(string s){istringstream is(s);long long x;is>>x;return x;}
string tos(long long t){stringstream st; st<<t;return st.str();}
int main() {
	int n;
	string str;
	cin >> n;
	bool first = true;
	getline(cin,str);
	while(n--) {
		if (first)
			first = false;
		else
			cout << endl;
		getline(cin,str);
		getline(cin,str);
		vector<pair<int,string> > v;
		stringstream ss(str);
		queue<int> cola;
		int nro;
		while (ss >> nro) {
			cola.push(nro);
		}
		string strn;
		getline(cin,str);
		stringstream dd(str);
		while (dd >> strn) {
			v.pb(mp(cola.front(),strn));
			cola.pop();
		}
		sort (ALL(v));
		REP(i,v.size()) {
			cout << v[i].second << endl;
		}
	}
	
	return 0;
}
