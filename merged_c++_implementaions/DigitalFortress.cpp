#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define REP(i, a, b) for(int i = int(a); i < int(b); i++)
#define dbg(x) cout << #x << " = " << x << "\n";
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
using namespace std;
int main() {
	char num; string str;
	int n; double raiz;
	scanf("%d", &n);
	getline(cin,str);
	while (n--) {
		string str; int j = 0;
		getline(cin,str);
		raiz = sqrt(str.size());
		int r = (int)raiz;
		if (r*r == str.size()) {
			for (int i = 0; i < (int)raiz; i++) {
				while (j < str.size()) {
					cout << str[j];
					j += (int)raiz;
				}
				j = i + 1;
			}
			cout << endl;
		}
		else {
			cout << "INVALID" << endl;
		}
	}
}
