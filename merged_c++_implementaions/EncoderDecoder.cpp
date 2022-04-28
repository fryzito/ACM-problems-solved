#include <cstdio>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
string ToString(int n) {
	stringstream ss;
	ss << n;
	return ss.str();
}
int ToInt(string str) {
	int resultado;
	istringstream ss(str);
	ss >> resultado;
	return resultado;
}
int main() {
	string str;
	while(getline(cin,str)&& str[0]) {
		if (isalpha(str[0])||str[0]==' '||str[0]=='!'||str[0]=='.'||str[0]==','||str[0]==':'||str[0]==';'||str[0]=='?') {
			string rpta ="";
			for(int i = 0; i < str.size(); i++){
				int n = str[i];
				rpta += ToString(n);
			}
			for(int i = rpta.size()-1; i >= 0; i--) {
				cout << rpta[i];
			}
			cout << endl;
		}
		else {
			string rpta1 = "";
			char ch;
			for(int i = str.size()-1; i >= 0; i-= 2) {
				string aux;
				aux += str[i];
				aux += str[i-1];
				int m = ToInt(aux);
				if (m < 65) {
					aux += str[i-2];
					m = ToInt(aux);
					ch = m;
					i--;
				}
				else {
					ch = m;
				}
				rpta1 += ch;
			}
			for (int i = 0; i< rpta1.size(); i++) {
				cout << rpta1[i];
			}
			cout << endl;
		}
	}
	return 0;
}

