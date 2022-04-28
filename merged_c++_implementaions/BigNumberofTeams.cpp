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
string convertir(string str) {
	string aux5 = "";
	REP(i,str.size()) {
		if (str[i] != ' ')
			aux5 += str[i];
	}
	return aux5;
}
int main () {
	int n;
	cin >> n;
	string str1,str2;
	getline(cin,str1);
	REP(i,n) {
		getline(cin,str1);
		getline(cin,str2);
		if (str1 == str2) {
			printf("Case %d: Yes\n",i+1);
		}
		else {
			string aux = convertir(str1);
			string aux1 = convertir(str2);
			if (aux == aux1) {
				printf("Case %d: Output Format Error\n",i+1);
			}
			else {
				printf("Case %d: Wrong Answer\n",i+1);
			}
		}
	}
	return 0;
}
