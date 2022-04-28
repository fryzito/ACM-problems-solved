#include <cstdio>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
int main() {
	string str;
	while(getline(cin,str) && str[0]!='0') {
		unsigned long long rpta = 0; int s = 0, j = 0, num;
		for (int i = str.size()-1 ; i >= 0; i--) {
			s |= (1 << j);
			j++;
			num = (str[i]-'0')*s;
			rpta += num;
		}
		cout << rpta << endl;
	}
	return 0;
}
