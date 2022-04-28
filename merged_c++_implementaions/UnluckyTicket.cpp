#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main() {
	int cont1 = 0, cont2 = 0, m;
	bool rpta1 = true, rpta2 = true;
	string str;
	cin >> m;
	getline(cin,str);
	getline(cin,str);
	//dbg(str);
	for(int i = 0; i < str.length()/2; i++,m++) {
		if(str[i] > str[m])
			cont1++;
		else if(str[i] < str[m])
				cont2++;
			 else {
			 	rpta1 = false;
			 	break;
			 }			 
	}
	if(rpta1)
		if(cont1 != 0 && cont2 != 0)
			rpta1 = false;
	//dbg(cont1); dbg(cont2);
	cont1 = 0; cont2 = 0;
	m = str.length()-1;
	for(int i = 0; i < str.size()/2; i++,m--) {
		if(str[i] > str[m])
			cont1++;
		else if(str[i] < str[m])
				cont2++;
			 else {
			   	rpta2 = false;
			   	break;
			 }
	}
	if(rpta2)
		if(cont1 != 0 && cont2 != 0)
			rpta2 = false;
//	dbg(cont1); dbg(cont2);
	//dbg(rpta1); dbg(rpta2)
	if(rpta1 || rpta2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}

