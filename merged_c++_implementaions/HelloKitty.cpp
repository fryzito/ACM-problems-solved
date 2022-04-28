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
	string str;	int n;
	cin >> str >> n;
	while(str.length()>1){
		F(i,str.length()){
			FOR(j,i,str.size()*n+i) {
				cout << str[j%str.size()];
			}
			cout << endl;
		}
		cin >> str >> n;
	}
	return 0;
}

