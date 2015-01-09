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
int main() {
	int x, y, i, j;
	cin >> y >> x;
	int Ay[y], Ax[x], cont = 0;
	map <int,int> mapa, mapaB;
	
	REP(j,y)
		cin >> Ay[j];
	REP(i,x)
		cin >> Ax[i];
		
	REP(i,y)
		REPN(j,i+1,y) {
			mapa[Ax[j] - Ax[i]]++;
		}
	REP(i,x)
		REPN(j,i+1,x) {
			mapaB[Ay[j] - Ay[i]]++;
		}
		
	for ( map<int,int>::iterator it = mapa.begin(); it != mapa.end();it++)
		cont += it->second*mapaB[it->first];
		
	cout << cont << endl;
}
