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
#define MAXN 21
int main() {
	int i, j;
	string str,str1;
	bool first = true;
	cin >> str;
	if (str.size()==1) goto loop;
	REP(i,str.size()) {
		if(str[i] != '/') {
			str1 += str[i] ;
			first = true;
		}
		else {
			if (first) {
				str1 += "/" ;
				first = false;
			}
		}
	}
	if (str1[str1.size() -1] == '/')
		str1 = str1.substr(0,str1.size()-1);
	loop:
	if (str.size() == 1)
		cout << str << endl;
	else if (str1 == "")
			cout << "/" << endl;
			else
			cout << str1 << endl;
}
