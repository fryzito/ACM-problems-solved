#include <cstdio>
#include <iostream>
#include <map>
using namespace std;
map<char,int> m;
int main() {
	int n; string str;
	m['a'] = m['d'] = m['g'] = m['j'] = m['m'] = m['p'] = m['t'] = m['w'] = 1;
	m['b'] = m['e'] = m['h'] = m['k'] = m['n'] = m['q'] = m['u'] = m['x'] = 2;
	m['c'] = m['f'] = m['i'] = m['l'] = m['o'] = m['r'] = m['v'] = m['y'] = 3;
	m['s'] = m['z'] = 4;   m[' '] = 1;
	scanf("%d\n",&n);
	for(int i=0; i<n; i++) {
		int cont = 0;
		getline(cin,str);
		for(int j=0; j < str.size(); j++) {
			cont += m[str[j]];
		}
		printf("Case #%d: %d\n",i+1,cont);
	}
	return 0;
}
