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
int main() {
	string str;
	int i, j, contador = 0;
	getline(cin,str);
	REP(i,str.size()) {
		int n = str[i];

		bitset<8> bits(n);

		string str1 = bits.to_string<char,char_traits<char>,allocator<char> >();
		reverse(str1.begin(),str1.end());

		bitset<8> bits2(str1);
		int numero = bits2.to_ulong();
		contador = contador - numero;
		if (contador >= 0) {
			contador = contador % 254;
			cout << contador << endl;
			contador = numero;			
		}
		else {
			contador =256 - (contador * -1) ;
			cout << contador << endl;
			contador = numero;
		}
	}
	return 0;
}
