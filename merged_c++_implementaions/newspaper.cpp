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
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a,b,sizeof(a))
#define REPN(x,a,b) for (int x=a; x<b;++x)
#define REP(x,b) REPN(x, 0, b)
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y) cout << #x << " = " << x << "  " << #y << " = " << y << endl;
#define dbl(i, a) cout << "[" << i << "]" << " = "<< a << ", ";
#define foreach(it, l) for ( typeof(l.begin()) it = l.begin(); it != l.end(); it++)
#define listar(lista) for(int i = 0; i < lista.size(); i++) { dbl(i, lista[i]);} cout << endl;
#define MAXN 10000
#define ll long long
#define oo (1<<30)
#define eps (1e-9)
#define sqr(x) (x)*(x)
using namespace std;
int main() {
	int n, m, a, q;
	char ch;
	cin >> n;
	while(n--) {
		cin >> m;
		map<char,int> mapa;
		REP(i,m) {
			cin >> ch;
			cin >> a;
			mapa[ch] = a;
		}
		cin >> q;
		string str;
		int cont = 0;
		getline(cin,str);
		REP(j,q) {
			getline(cin,str);
			REP(k,str.size()) {
				if (mapa.find(str[k]) != mapa.end())
					cont += mapa.find(str[k])->second;
			}
		}
		double rpta = (double)cont / 100;
		printf("%.2f$\n",rpta);
	}



	return 0;
}
