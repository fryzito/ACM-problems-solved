#include <cstdio>
#include <iostream>
#include <vector>
#include <sstream>
#define pb push_back
using namespace std;
int main() {
	string str;
	string aux;

	while(getline(cin,str)){
		for(int i = 0; i < str.length(); i++) {
			if(!isalpha(str[i])) str[i] = ' ';
		}
		vector<string> v;
		stringstream ss(str);
		while(ss >> aux) v.pb(aux);
		cout << v.size() << endl;
	}
	return 0;
}

