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
#define MAXN 26
int main() {
	char str1[MAXN], str2[MAXN];
	while(gets(str1) && gets(str2)) {
		int i, j, cont = 0;
		string str3 = str1;
		string str4 = str2;
		REP(i,str3.size()) {
			if (isalpha(str3[i])) {
				if (isupper(str3[i])) {
					cont += (str3[i] - 'A') + 1;
				}
				if (islower(str3[i])) {
					cont += (str3[i] - 'a') + 1;
				}
			}			
		}
		int cont2 = 0;
		REP(j,str4.size()) {
			if (isalpha(str4[j])) {
				if (isupper(str4[j])) {
					cont2 += (str4[j] - 'A') + 1;
				}
				if (islower(str4[j])) {
					cont2 += (str4[j] - 'a') + 1;
				}
			}			
		}
		while (cont > 9) {
			int n = cont;
			cont = 0;
			while(n != 0) {
				cont += n%10;
				n /= 10;
			}
		}
		while (cont2 > 9) {
			int n = cont2;
			cont2 = 0;
			while(n != 0) {
				cont2 += n%10;
				n /= 10;
			}
		}

		if ((cont == 0) && (cont2 == 0)) { cout << endl ; goto loop; }
		
		if (cont < cont2) {

			double r = ((double)cont/(double)cont2) * 100;
			printf("%.2f %%\n",r);
		}
		else {

			double r = ((double)cont2/(double)cont) * 100;
			printf("%.2f %%\n",r);
		}
		
		loop:
		cont = 0;
	}
	return 0;
}
