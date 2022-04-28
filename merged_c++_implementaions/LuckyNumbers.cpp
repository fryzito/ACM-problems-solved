#include<cstdio>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
#include<string>
#define dbg(x) cout << #x << " = " << "\n";
using namespace std;
int count7 = 0;
int count4 = 0;
bool eslucky(string n) {
	for (int i = n.size() -1; i >= 0; i--) {
		if ((n[i] != '7') || (n[i] != '4'))
			return false;
	}
	for (int i = n.size() -1; i >= 0; i--) {
		if (n[i] == '7')
			count7++;
		else
			count4++;
	}
	if (count7 == count4) {
		count7 = count4 = 0;
		return true;
	}
	else {
		count7 = count4 = 0;
		return false;
	}
}
int main() {
	string n;
	cin >> n;
	if (eslucky(n)) {
		cout << n << endl;
	}
	else {
		for (int i = n.size() -1; i >= 0; i--)
			if((n[i] != '7') && (n[i] != '4')) {
				if (n[i] <= '4')
					n[i] = '4';
				else{
					if ( n[i] > '7')
						n[i] = 4;
					else
						n[i] = '7';
				}
			}
		if (eslucky(n))
			cout << n << endl;
		else {
			for (int i = n.size() -1; i >= 0; i--)
				if (n[i] == '4')
					count4++;
				else
					count7++;
			if (count4 > count7) {
				int nveces = (count4 + count7) / 2 - count7;
				for (int i = n.size() -1; i >= 0; i--) {
					if (nveces == 0)
						break;
					else {
						if(n[i] == '4') {
							n[i] = '7';
							nveces--;
						}
					}
				}
				cout << n << endl;
			}
			else {
				int nveces = (count4 + count7) / 2 - count4;
				for (int i = n.size() -1; i >= 0; i--) {
					if (nveces == 0)
						break;
					else {
						if(n[i] == '7') {
							n[i] = '4';
							nveces--;
						}
					}
				}
				cout << n << endl;
			}
		}
	}
}
