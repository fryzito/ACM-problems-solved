#include<cstdio>
#include<iostream>
#include<list>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main() {
	string str;
	while(cin>>str) {
		bool inicio = true;
		list<char> rpta;
		list<char>::iterator it;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] != ']' && str[i] != '[') {
				if (inicio)
					rpta.push_back(str[i]);
				else
					rpta.insert(it,str[i]);
			}
			else {
				if (str[i] == '[') {
					it = rpta.begin();
					inicio = false;
				}
				else {
					inicio = true;
				}
			}
		}
		for(it = rpta.begin(); it != rpta.end(); it++)
			cout << *it;
		cout << endl;
	}
	return 0;
}
