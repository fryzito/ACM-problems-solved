#include <iostream>
#include <string>
#include <bitset>
#include <cstdio>
#include <stack>
using namespace std;
#define dbg(x) cout << #x << " = " << x << endl;
int main() {
	int n;
	while(cin >> n) {
		bitset<32> first (n);
		stack<string> s;
		string str = first.to_string<char,char_traits<char>,allocator<char> >();

		for (int i = 0; i < 32; i+= 8) {
			string substr = str.substr(i,8);
			s.push(substr);
		}
		
		string largo = "";
		
		while(!s.empty()) {
			largo += s.top();
			s.pop();
		}
		
		if ( largo[0] == '1') {
			bitset<32> final(largo);
			int t = 0;
			while(final[t] == 0) {
				final[t] = 1;
				t++;
			}
			final[t] =0;

			final = final.flip();
			cout << n << " converts to -" << final.to_ulong() << endl;
		}
		else {

				bitset<32> final(largo);
				cout << n << " converts to " << final.to_ulong() << endl;

		}		
	}
	return 0;
}
