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
#define MAX 1000
int cribo[MAX + 1]; 
int primos[MAX + 1]; 
int n_primos = 0; 

void init_cribo() { 
    for (int i = 2; i <= MAX; i++) { 
        if(!cribo[i]) { 
            primos[n_primos++] = i; 
            for (int j = i; i* j <= MAX; j++) 
                cribo[i*j] = 1; 
        } 
    } 
}

int nfactors(int g) {
	int nro = 0;
	for (int h=1; h <= g; h++) {
		if (g%h == 0) nro++;
	}
	return nro;
}

bool es_primo(int n) { 
    if(n == 1) return false; 
    if(n <= MAX && !cribo[n]) return true; 
    for (int i = 0; primos[i] * primos[i] <= n; i++) { 
        if(n % primos[i] == 0)  return false; 
    } 
    return true; 
}

int main() {
	int i, j, a,b,n;
	cin >> n;
	init_cribo();
	REP(i,n) {
		bool firts = false;
		cin >> a >> b;
		if (a == 0) a++;
		REPN(j,a,b+1) {
			int nfactores = nfactors(j);
			if(es_primo(nfactores)) {
				if (firts)
					cout <<" "<< j;
				else
					cout << j;
				firts = true;
			}
		}
		if(!firts) cout << "-1" ;
		cout << endl;
	}
	return 0;
}
