#include <iostream>
#include <sstream>
#include <utility>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <functional>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <bitset>
#include <list>
#include <map>
#include <set>
#include <stdio.h>
#include <string.h>
using namespace std;

#define FOR(i,a,b)  for(int i=(a),_##i=(b);i<_##i;++i)
#define F(i,a)      FOR(i,0,a)
#define ALL(x)      x.begin(),x.end()
#define PB          push_back
#define MP          make_pair
#define S           size()
#define dbg(x)      cout << #x << " = " << x << endl;
typedef long long   LL;
int main(){
	int m, n, k;
	vector<vector<string> > A;
	vector<string> aux(1,"1");
	A.PB(aux);
	FOR(i,1,21) {
		aux.clear();
		
		F(j,A[i-1].S) {
			aux.PB(A[i-1][j]+"0");
		}
		F(j,A[i-1].S) {
			aux.PB(A[i-1][j]+"1");
		}
		
		A.PB(aux);
	}
	/*F(i,A.S) {
		F(j,A[i].S) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}*/
	cin >> m;
	F(i,m) {
		cin >> n >> k;
		bitset<20> bit(A[n-1][k-1]);
		cout << bit.to_ulong() << endl;
	}
	cin >> m;
	return 0;
}

