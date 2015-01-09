#include <cstdio>
#include <iostream>
#include <string>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int x,i, I = 0, V = 0, X = 0, L = 0, C = 0;
int Vn[9] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
string Vc[9] = {"c","xc","l","xl","x","ix","v","iv","i"};
void count(string str) {
	for(int j = 0; j < str.size(); j++) {
		if (str[j] == 'c') C++;
		if (str[j] == 'l') L++;
		if (str[j] == 'x') X++;
		if (str[j] == 'v') V++;
		if (str[j] == 'i') I++;
	}
	return;
}

string Hallar(int x) {
	string str = "";
	i = 0;
	while( x > 0) {
		if( x >= Vn[i] ) {
			str += Vc[i];
			x = x - Vn[i];
		}
		else {
			i++;
		}
	}
	return str;
}
int main(){
	cin >> x;
	while (x) {
		string str1;
		I = V = X = L = C = 0;
		for (int i = 1; i <= x; i++) {
			str1 = Hallar(i);
//			dbg(str1);
			count(str1);
		}
		printf("%d: %d i, %d v, %d x, %d l, %d c\n", x, I, V, X, L, C);
		cin >> x;
	}
	return 0;
}

