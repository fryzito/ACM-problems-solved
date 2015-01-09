/*
ID: fryzito
LANG: C++
TASK: palsquare
*/
#include <cstdio>
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int b;
int ar[302];
vector <string> v(302,"");
vector <string> v2(302,"");
char ToStr(int n) {
	if (n < 10) {
		return '0'+ n;
	}
	else {
		return 'A'+ (n-10);
	}
}
void conver2(int a, int b, int i) {
	if (b > a) {
		v2[i] += ToStr(a);
	}
	else {
		while(a >= b) {
		v2[i] += ToStr(a%b);
		a = a/b;
		}
		v2[i] += ToStr(a);
	}
	return;
}
void conver(int a, int b, int i) {
	if (b > a) {
		v[i] += ToStr(a);
	}
	else {
		while(a >= b) {
		v[i] += ToStr(a%b);
		a = a/b;
		}
		v[i] += ToStr(a);
	}
	return;
}
bool espalindrome(string str) {
		for (int i = 0; i < str.size()/2; i++) {
			if(str[i] != str[str.size()-(i+1)])
				return false;
		}
		return true;
}
int main() {
	freopen("palsquare.in" , "r" , stdin);
	freopen("palsquare.out" , "w" , stdout);
	cin >> b;
	for(int i = 1; i <= 300; i++) ar[i] = i*i;
	for(int i = 1; i <= 300; i++) {
		conver(ar[i],b,i);
	}
	for(int i = 1 ; i <= 300; i++) {
		if(espalindrome(v[i])) {
			conver2(i,b,i);
			reverse(v2[i].begin(),v2[i].end());
			cout << v2[i] << " " << v[i] << endl;
		}
	}
	return 0;
}
