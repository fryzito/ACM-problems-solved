/*
ID: fryzito
LANG: C++
TASK: dualpal
*/
#include <cstdio>
#include <iostream>
#include <vector>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int n, s, cnt;
vector <string> v(11,"");
bool ispal(string str) {
		for (int i = 0; i < str.size()/2; i++) {
			if(str[i] != str[str.size()-(i+1)])
				return false;
		}
		return true;
}
char ToStr(int n) {
	if (n < 10) {
		return '0'+ n;
	}
	else {
		return 'A'+ (n-10);
	}
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
void buscar(int n) {
	for(int i = 2; i < 11; i++) {
		conver(n,i,i);
		if(ispal(v[i]))
			cnt++;
	}
}
int main() {
	freopen("dualpal.in" , "r" , stdin);
	freopen("dualpal.out" , "w" , stdout);
	cin >> n >> s;
	int j = 0;
	while(j < n) {
		s++;
		buscar(s);
		if(cnt >= 2){
			cout << s << endl;
			j++;
		}
		cnt = 0;
		v.resize(0);
		v.resize(11,"");
	}
	return 0;
}

