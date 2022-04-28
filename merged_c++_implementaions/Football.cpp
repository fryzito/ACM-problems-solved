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
bool rpta = false;
int main() {
	int i, j;
	string str;
	cin >> str;
	if (str.size() >= 7) {
		for (int i = 0; i < str.size()-6; i++) {
			if ( (str[i] == str[i+1]) && (str[i+1] == str[i+2]) && (str[i+2] == str[i+3]) && (str[i+3] == str[i+4]) && (str[i+4] == str[i+5]) && (str[i+5] == str[i+6]) ) {
				rpta = true;
			}
		}		
	}
	
	if (rpta) cout << "YES" << endl;
	else cout << "NO" << endl;
}
