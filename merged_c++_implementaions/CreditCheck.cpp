#include <cstdio>
#include <iostream>
#include <sstream>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
string Tostr(int nro) {
	stringstream ss;
	ss << nro;
	return ss.str();
}
int main() {
	string str,aux;
	int n,nro;
	scanf("%d\n",&n);
	for (int i = 0; i < n; i++) {
		string str2 = "", str3 = "";
		int cont1 = 0, cont2 = 0;
		getline(cin,str);
		istringstream ss(str);
		while(ss >> aux) str2 += aux;
		for (int i=0; i<str2.size();i+=2) {
			nro = str2[i]-'0';
			nro = nro*2;
			str3+=Tostr(nro);
		}
		for(int i=0;i<str3.size();i++)
			cont1 += str3[i]-'0';
		for(int i=1;i<str2.size();i+=2)
			cont2 += str2[i] - '0';
		if((cont1+cont2)%10 == 0)
			printf("Valid\n");
		else
			printf("Invalid\n");
	}
	return 0;
}
