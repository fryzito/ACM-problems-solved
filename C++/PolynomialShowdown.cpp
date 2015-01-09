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
string ar[9] = {"","x","x^2","x^3","x^4","x^5","x^6","x^7","x^8"};
int main() {
	int n[9], j;
	string str;
	int nro;
	while(getline(cin,str)) {
		int h = 8;
		stringstream ss(str);
		while(ss >> nro) {
			n[h] = nro;
			h--;
		}
		
		bool first = true;
		int contador = 0;
		for(int i = 8; i >= 0; i--){
			if (n[i] == 0) {
				contador++;
				continue;
			}
			else {
				if (n[i] > 0) {
					if (n[i] > 1) {
						if (first) {
							cout << n[i] <<ar[i];
							first = false;
						}
						else
							cout << " + " << n[i] << ar[i];
					}
					else {
						if(first) {
							if(i == 0 && n[i] == 1) {
								cout << "1";
								first = false;
							}
							else {
								cout  << ar[i];
								first = false;
							}
						}
						else {
							if(i == 0 && n[i] == 1)
								cout << " + 1";
							else
								cout << " + "  << ar[i];							
						}							
					}
				}
				else {
					if (n[i]  == -1) {
						if (first) {
							if (i==0) {
								cout <<"-1";
								first = false;
							}
							else {
								cout <<"-"<<ar[i];
								first = false;
							}
						}
						else {
							if (i == 0)
								cout << " - 1";
							else
								cout <<" - "<<ar[i];
						}
					}
					else {
						if (first) {
							cout << n[i] << ar[i];
							first = false;
						}
						else
							cout << " - " << -1*n[i] << ar[i];
					}					
				}
			}
		}
		if (contador == 9) cout << "0" ;
		cout << endl;
	}
}
