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
#define MAXN 21
#define MAXN2 27
vector <string> vs;
char inde[MAXN2] = {' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int find(char ch) {
	int i;
	REP(i,27) {
		if (ch == inde[i])
			return i;
	}
}
string conver(string str, int k) {
	int i;
	REP(i,str.size()) {
		int j = find(str[i]);
		str[i] = inde[(j+k)%27];
	}
	return str;
}
bool is_in_diccionari(string str) {
	int l;
	REP(l,vs.size()) {
		if (str == vs[l])
			return true;
	}
	return false;
}
void printstr(string str) {
	vector<string> v1;
	int r, contador = 0;
	string strx;
	stringstream ss(str);
	while (ss >> strx) {
		v1.pb(strx);
	}
	v1.pb("");
	REP(r,v1.size()-1) {
		if(contador == 0)
			cout << v1[r];
		else
			cout << " " << v1[r];
		contador += v1[r].size()+1;
		if (contador + v1[r+1].size() >= 60) {
			cout << endl;
			contador = 0;
		}
	}
	cout << endl;
}
int main() {
	char str[MAXN];
	int i, j, k, mayor = -1,cont = 0;
	string str1,stringmayor;
	while (gets(str) && (str[0] != '#')) {
		vs.pb(str);
	}
	getline(cin,str1);
	REPN(k,1,27) {
		string convert = conver(str1,k);
		stringstream ss(convert);
		string str2;
		while (ss >> str2) {
			if(is_in_diccionari(str2)){
				cont++;
			}
		}
		if (cont > mayor) {
			mayor = cont;
			stringmayor = convert;
		}
		cont = 0;
	}
	
	printstr(stringmayor);
	
	return 0;
}
