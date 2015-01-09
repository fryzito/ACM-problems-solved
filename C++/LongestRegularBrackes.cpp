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
string str,aux="";
bool ban;
int main () {
	int i,j, cont = 0, num, mayor = - 1;
	cin >> str;
	stack<char> pila;
	pila.push(str[0]);
	vector<bool> A;
	vector<string> vec;
	REPN(i,1,str.size()) {
		if (( pila.top() == '(' )&& ( str[i] == ')' )) {
			ban = true;
			aux += pila.top();
			pila.pop();
			cont +=2;
			mayor = max(cont,mayor);
			if
			A.pb(ban);
		}
		else {
			vec.pb(aux);
			aux = "";
			cont = 0;
			pila.push(str[i]);
			A.pb(ban);
		}
	}
	
	cout << mayor << " "<< h << endl;
}
