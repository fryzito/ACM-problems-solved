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
int main() {
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	int n, i, j;
	string str;
	cin >> n;
	cin >> str;
	vector<int> v;
	REP(i,str.size()) {
		if (str[i] == '1')
			v.pb(i);
	}
	vector <int> v1;
	REPN(i,1,v.size()) v1.pb(v[i] - v[i-1]);
	bool rpta = true;
	REPN(i,1,v1.size()){
		if (v1[i] != v1[i-1]) {
			rpta = false;
			break;
		}
	}
	if (rpta)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
