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
#define MAXN 10000
string ToString(int n) {
	stringstream ss;
	ss << n;
	return ss.str();
}
bool islucky1(string num) {
	int i;
	REP(i,num.size()) {
		if(num[i] != '4' && num[i] != '7')
			return false;
	}
	return true;
}

bool islucky(int n) {
		if (n%4 == 0 || n%7 == 0)
			return true;
		else
			return false;
}
int main () {
	int n;
	cin >> n;
	string number = ToString(n);
	if (islucky(n) || islucky1(number))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}
