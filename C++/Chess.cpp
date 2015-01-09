#include <cstdio>
#include <iostream>
#include <algorithm>
#define LL long long
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main() {
	int n, a, b, may, men;
	cin >> n;
	char ch;
	for(int i = 0; i < n; i++) {
		cin >> ch;
		switch(ch) {
			case 'r'  :
				cin >> a >> b;
				cout << min(a,b) << endl;
				break;
			case 'k'  :
				cin >> a >> b;
				may = a*b;
				if(may%2 == 0)
					cout << may/2 << endl;
				else
					cout << (may/2) + 1 << endl;
				break;
			case 'Q' :
				cin >> a >> b;
				cout << min(a,b) << endl;
				break;
			case 'K' :
				cin >> a >> b;
				if(a%2 != 0)
					a = (a/2) + 1;
				else
					a = a/2;
				if(b%2==0)
					b = b/2;
				else
					b = (b/2) +1;
				cout << a*b << endl;
				break;
			default:
				break;
		}
	}
	return 0;
}
