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
string ToString(int n) {
	stringstream ss;
	ss << n;
	return ss.str();
}
bool ispalindrome(string str1) {
	int i, n = str1.size();
	REP(i,(n/2)) {
		if (str1[i] != str1[n-1-i])
			return false;
	}
	return true;
}
int main() {
	int i,j,mayor = -1;
	dbg(999*999);
	for(int i = 999 ; i > 0; i--) {
		for(int j = 999; j > 0; j--) {
			int m = i*j;
			string str = ToString(m);
			if (ispalindrome(str)) {
				mayor = max(mayor,i*j);
			}
		}
	}
	cout << "el mayor es " << mayor << endl;
	return 0;
}
