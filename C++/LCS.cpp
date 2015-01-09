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
int lcs (string str1, string str2) {
	int i, j;
	str1 = '#' + str1;
	str2 = '#' + str2;
	int C[str1.size()][str2.size()];
	REP(i,str1.size())
		REP(j,str2.size())
			C[i][j] = 0;
			
	REPN(i,1,str1.size())
		REPN(j,1,str2.size()) {
			if (str1[i] == str2[j])
				C[i][j] = C[i-1][j-1] + 1;
			else
				C[i][j] = max(C[i][j-1], C[i-1][j]);
		}
		
	REP(i,str1.size()) {
		REP(j,str2.size())
			cout << C[i][j] << " ";
		cout << endl;
	}
			
	return C[str1.size()-1][str2.size()-1];
}
int main() {
	string str1, str2;
	cin >> str1;
	cin >> str2;
	cout << lcs(str1,str2) << endl;
}
