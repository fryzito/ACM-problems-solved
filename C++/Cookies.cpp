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
int main () {
	int n, i, j, suma = 0, cont = 0;
	cin >> n;
	int A[n];
	REP(i,n) {
		cin >> A[i];
		suma += A[i];
	}
	if(suma % 2 == 0) {
		REP(j,n) {
			if (A[j]%2 == 0)
				cont++;
		}
		cout << cont << endl;
		cont = 0;
	}
	else {
		REP(j,n) {
			if (A[j]%2 == 1)
				cont++;
		}
		cout << cont << endl;
		cont = 0;
	}
	
	
	
	return 0;
}
