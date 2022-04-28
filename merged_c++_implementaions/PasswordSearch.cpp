#include<cstdio>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
#include<string>
#define REP(i, a, b) for(int i = int(a); i < int(b); i++)
#define dbg(x) cout << #x << " = " << "\n";
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
using namespace std;
int main() {
	string patron, patron1, patronmayor;
	string str;
	int num, cont, mayor = 0;
	while( cin >> num ) {
	vector<pair<int,string> > v;
	cin >> str;
		for (int i = 0; i < str.length() ; i++) {
			cont = 0;
			patron = str.substr(i,num);
			for(int j = 0; j < str.length(); j++) {
				patron1 = str.substr(j,num);
				if(patron == patron1) {
					cont++;
				}
			}
			if(cont > mayor) {
				mayor = cont;
				patronmayor = patron;
			}
		}
		cout << patronmayor << endl;
	}
}
