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
#define MAXN 10000
int main() {
	int n,i, j, m, cont = 0;
	cin >> n >> m;
	int A[n];
	REP(i,n){
		cin >> A[i];
	}

	REPN(i,1,n) {
		if(A[i] - A[i-1] <= 0) {
			int aux = (-1* (A[i] - A[i-1]))/m +1;
			A[i] += aux*m;
			cont += aux;
		}
	}

	cout << cont << endl;
}
