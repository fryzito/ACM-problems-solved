/*
 ID: edusanche1
 PROG: fracdec
 LANG: C++
 */
#include <fstream>
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

#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) //traverse containers
#define pb push_back
#define mp make_pair

#define dbg(x) cout << #x << " = " << x << "\n";
#define dbg2(x, y) cout << #x << " = " << x << "  " << #y << " = " << y << "\n";
#define dbg3(x, y, z) cout << #x << " = " << x << "  " << #y << " = " << y << "  " << #z << " = " << z << "\n";
#define dbg4(x, y, z, w) cout << #x << " = " << x << "  " << #y << " = " << y << "  " << #z << " = " << z << "  " << #w << " = " << w << "\n";

#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a, b, sizeof a)

using namespace std;

string i2s(int x) { stringstream ss; ss<<x; return ss.str(); }


int main() {
	
	//freopen("fracdec.in", "r", stdin);
	//freopen("fracdec.out", "w", stdout);
	
	int a, b;
	scanf("%d %d", &a, &b);
	
	string res;
	map < int, int > mapa;
	int cnt = 0;
	int p = a / b;
	res += i2s(p);
	if (a % b == 0) res += ".0";
	else {
		res += ".";
		int r = a % b;
		bool bo = false;
		while (true) {
			if (r == 0) break;
			if (mapa.count(r) != 0) { bo = true; break; }
			mapa[r] = res.length();
			r *= 10;
			res += i2s(r / b);
			r %= b;
		}
		if (bo) {
			res = res.substr(0, mapa[r]) + "(" + res.substr(mapa[r], res.length() - mapa[r]) + ")";
		}
	}

	while (res.length() > 76) {
		cout << res.substr(0, 76) << endl;
		res = res.substr(76, res.length() - 76);
	}
	cout << res << endl;
	return 0;
}
