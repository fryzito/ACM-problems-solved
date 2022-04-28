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
char M[400][400];
int m,n;
string mensaje = "";
void recorrer( int x, int y);
void recorrerArriva( int x, int y) {
		if ((x >= 0) && (y >= 0) && (y < m) && (x < n)) {
			if ((M[y][x] != '*')) {
				mensaje += M[y][x];
				M[y][x] = '*';
				recorrerArriva(x , y-1);
				recorrer(x+1,y);
			}
		}
}
void recorrer( int x, int y) {
	if ((x >= 0) && (y >= 0) && (y < m) && (x < n)) {
		if ((M[y][x] != '*')) {
			mensaje += M[y][x];
			M[y][x] = '*';
			recorrer(x+1,y);
			recorrer(x,y+1);
			recorrer(x-1,y);
			recorrerArriva(x,y-1);
		}
	}
}
bool isacepted(string str) {
	REP(k,str.size()) {
		
	}
}
int main() {
	cin >> m >> n;
	while(m && n) {
		string str;
		int k = 0;
		cin >> str;
		REP(i,m) {
			REP(j,n) {
				M[i][j] = str[k];
				k++;
			}
		}		
		recorrer(0,0);

		REP(j,127) {
			string newmensaje = "";
			REP(i,mensaje.size()) {
				int a = mensaje[i];
				a = (a + j) % 126;
				newmensaje += (char)a;
			}
			if (isacepted(newmensaje)) {
				mensaje = newmensaje;
				break;
			}
		}

		cout << mensaje << endl;
		
	cin >> m >> n;
	}
}
