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

string str;
int main() {
	int i;
	cin >> str;
	stack<char> pila;
	pila.push('#');
	pila.push(str[0]);
	REPN(i,1,str.size()) {
		if (pila.top() != str[i]) {
			pila.push(str[i]);
		}
		else {
			pila.pop();
		}
	}
	string str2 = "";
	while(!pila.empty()) {
		str2 += pila.top();
		pila.pop();
	}
	for(int i = str2.size()-2; i>=0; i--)
		cout << str2[i] ;
	cout << endl;
}
