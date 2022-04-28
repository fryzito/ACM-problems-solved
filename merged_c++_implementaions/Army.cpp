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
int main () {
	int n, i, j, a, b, count = 0;
	cin >> n;
	int A[n-1];
	REP (i,n-1) {
		cin >> A[i] ;
	}
	
	cin >> a >> b;
	int aux = b-a;
	i = 0;
	if (n != 2) {
		if (A[0] > A[1]) {
			REPN(i,1,aux+1) {
				count += A[i%n-1];
			}
		}
		else {
			REP(i,aux) {
				count += A[i];
			}
		}
	}
	else
		count = A[0];
	
	cout << count << endl;


}
