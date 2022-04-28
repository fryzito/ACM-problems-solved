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
typedef long long   LL;
int main(){
	int n,a,cont1,cont2;
	cin >> n;
	while(n--) {
		cin >> a; cont1 = 0; cont2 = 0;
		int A[a][a];
		F(j,a)
			F(i,a)
				cin >> A[i][j];
					
		F(j,a) {
			F(i,a)
				if(A[i][j] == 1) {
					cont1++;
					break;
				}
		}
		
		F(j,a) {
			F(i,a)
				if(A[j][i] == 1) {
					cont2++;
					break;
				}
		}
		cout << min(cont1,cont2) << endl;
	}
	return 0;	
}

