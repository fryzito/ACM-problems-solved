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
int matrix[MAXN][MAXN];
int lcs(string str1, string str2, int k) {
	int a,b,c;
	str1 = '#' + str1;
	str2 = '#' + str2;
	
	int C[str1.size()][str2.size()];
	
	REP(i,str1.size()) {
		REP(j,str2.size()) {
			C[i][j] = 0;
		}
	}
	
	REPN(a,k,str1.size())
		REPN(b,k,str2.size()) {
			C[a][b] = max(C[a][b-1],C[a-1][b]);
			REP(c,a+1) {
				if (c >= k)
					C[a][b] = max(C[a][b], C[a-c][b-c] + c);
				if (str1[a-c] != str2[b-c]) break;
			}
		}
		
	REP(j,str1.size()) {
		REP(i,str2.size()) {
			cout << C[j][i] << " ";
		}
		cout << endl;
	}
	return C[str1.size()-1][str2.size()-1];
}
int main() {
	int n; string str1, str2;
	cin >> n;
	while (n) {
		cin >> str1;
		cin >> str2;
		cout << lcs(str1,str2,n) << endl;
		cin >> n;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
