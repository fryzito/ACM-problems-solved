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
#define MAXN 1000
int main() {
	string str, str1;	int i;	char aux;
	while(cin >> str1, cin >> str) {
		REP(i,str.size()) {
			int n = str[i];
			n++;
			aux = n;
			str[i] = aux;
		}
		int i = 0; int cont = 0;
		while (i < str.size() && str.size() > 1) {
			if (cont % 2 == 0) {
				swap(str[i],str[i+1]);
				i += 2;
				cont++;
			}
			else {
				if (i + 2 < str.size()) {
					swap(str[i],str[i+2]);
					i += 3;
				}
				else
					if (i + 1 < str.size()) {
						swap(str[i],str[i+1]);
						i += 2;
					}
				cont++;
			}
		}

		if (str.compare(str1) == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	return 0;
}
