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
char dic1[8] = {'>', '<' , '+' , '-' , '.' , ',' , '[' , ']' } ;
string dic2[8] = {"1000","1001","1010","1011","1100","1101","1110","1111"} ;
int buscar(char ch) {
	int h;
	REP(h,8) {
		if (ch == dic1[h])
		return h;
	}
		return -1;
}
int main() {
	string str;
	int i, j;
	getline(cin,str);
	string nun = "";
	REP(i, str.size()) {
		int ind = buscar(str[i]);
		nun += dic2[ind];
	}	
	dbg(nun);
	bitset<33> number(nun);
	cout << number.to_ulong() % 1000003 << endl;
	return 0;
}
