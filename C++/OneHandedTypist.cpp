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
map<char,char> mapa;
void initmapa() {
	mapa['`'] = '`'; mapa['1'] = '1'; mapa['2'] = '2'; mapa['3'] = '3'; mapa['4'] = 'q'; mapa['5'] = 'j';
	mapa['6'] = 'l'; mapa['7'] = 'm'; mapa['8'] = 'f'; mapa['9'] = 'p'; mapa['0'] = '/';
	mapa['-'] = '['; mapa['='] = ']' ; mapa['q'] = '4'; mapa['w'] = '5'; mapa['e'] = '6'; mapa['r'] = '.'; mapa['t'] = 'o';
	mapa['y'] = 'r'; mapa['u'] = 's'; mapa['i'] = 'u'; mapa['o'] = 'y'; mapa['p'] = 'b';
	mapa['['] = ';'; mapa[']'] = '='; mapa['\\'] = '\\'; mapa['a'] = '7'; mapa['s'] = '8';
	mapa['d'] = '9'; mapa['f'] = 'a'; mapa['g'] = 'e'; mapa['h'] = 'h'; mapa['j'] = 't';
	mapa['k'] = 'd'; mapa['l'] = 'c'; mapa[';'] = 'k'; mapa['\''] = '-'; mapa['z'] = '0';
	mapa['x'] = 'z'; mapa['c'] = 'x'; mapa['v'] = ','; mapa['b'] = 'i'; mapa['n'] = 'n';
	mapa['m'] = 'w'; mapa[','] = 'v'; mapa['.'] = 'g'; mapa['/'] = '\''; mapa[' '] = ' ';
	
	mapa['~'] = '~'; mapa['!'] = '!'; mapa['@'] = '@'; mapa['#'] = '#'; mapa['$'] = 'Q'; mapa['%'] = 'J';
	mapa['^'] = 'L'; mapa['&'] = 'M'; mapa['*'] = 'F'; mapa['('] = 'P'; mapa[')'] = '?';
	mapa['_'] = '{'; mapa['+'] = '}' ; mapa['Q'] = '$'; mapa['W'] = '%'; mapa['E'] = '^'; mapa['R'] = '>'; mapa['T'] = 'O';
	mapa['Y'] = 'R'; mapa['U'] = 'S'; mapa['I'] = 'U'; mapa['O'] = 'Y'; mapa['P'] = 'B';
	mapa['{'] = ':'; mapa['}'] = '+'; mapa['|'] = '|'; mapa['A'] = '&'; mapa['S'] = '*';
	mapa['D'] = '('; mapa['F'] = 'A'; mapa['G'] = 'E'; mapa['H'] = 'H'; mapa['J'] = 'T';
	mapa['K'] = 'D'; mapa['L'] = 'C'; mapa[':'] = 'K'; mapa['\"'] = '_'; mapa['Z'] = ')';
	mapa['X'] = 'Z'; mapa['C'] = 'X'; mapa['V'] = '<'; mapa['B'] = 'I'; mapa['N'] = 'N';
	mapa['M'] = 'W'; mapa['<'] = 'V'; mapa['>'] = 'G'; mapa['?'] = '\"';
}
int main() {
	string str;
	initmapa();
	while (getline(cin,str)) {
		REP(i,str.size()) {
			cout << mapa[str[i]];
		}
		cout << endl;
	}
	return 0;
}
