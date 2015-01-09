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
int main() {
	string str;
	int num, i, j;
	bool rpta = false;
	getline(cin,str);
	REP(i, str.size()) {
		num = str[i];
		if ((num == 72) || (num == 81) || (num == 57)) {
			rpta = true;
		}
	}
	if (rpta)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
