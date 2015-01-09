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
typedef unsigned long long ll;

int main() {
	int n;
	cin >> n;
	while(n != -1) {
		bitset<32> num(n);
		bool first = true;
		cout << n << " = ";
		for (int i = num.size()-1; i >= 0 ; i--) {
			if (num[i] == '1') {
				if (first){

					first = false;
				}
				else {

				}
			}
		}
	}
	return 0;
}
