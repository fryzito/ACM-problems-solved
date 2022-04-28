#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	string str;
	cin >> str;
	int value[str.size()];
	value[0] = 1;
	int cont = 1;
	for (int i = 1; i < str.size() ; i++) {
		if (str[i-1] != str[i] || cont == 5) {
			value[i] = value[i-1]+1;
			cont = 1;
		}
		else {
			value[i] = value[i-1];
			cont++;
		}
	}
	cout << value [str.size()-1] << endl;
}
