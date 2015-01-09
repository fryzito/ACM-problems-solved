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
int ToInt(string str) {
	int res;
	istringstream ss(str);
	ss >> res;
	return res;
}
int main() {
	int n,i, j;
	cin >> n;
	string A[n+1][n+1];
	REPN(i,1,n+1) {
		cin >> A[0][i];
		A[i][0] = A[0][i];
	}
	
	REP(i,n+1) A[i][i] = "-1";
	int cont = 0;
	REPN(j,1,n+1) {
		REPN(i,j+1,n+1) {
			if(A[j][i] != "-1") {
				A[j][i] = A[0][i] + A[j][0];
				dbg(A[j][i]);
				dbg2(j,i);
				int num = ToInt(A[j][i]);
				if (num%3 == 0) {
					 cont++;
					 int k;
					 REPN(k,1,n+1) {
						A[i][k] = "-1";
						A[k][j] = "-1";
					 }
				}
			}
		}
	}
	cout << cont << endl;
	return 0;
}
