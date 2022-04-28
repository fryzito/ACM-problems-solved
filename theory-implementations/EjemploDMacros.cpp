#include <cstdio>
#include <iostream>
#define REP(i, a, b) for (int i = int(a); i < int(b); i++)
#define dbg(x) cout << #x << " = " << x << "\n";
using namespace std;
int main() {
	string pal = "abcdef";
	 for (int i = 0; i < 6; i+=2) {
               char aux = pal[i];
               pal[i] = pal[i + 1];
               pal[i + 1] = aux;
       }
	 REP(i,0,6) cout << pal[i] << endl;
	return 0;
}
