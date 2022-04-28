#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <sstream>
using namespace std;

string c_to_bit(unsigned long long x) {
	string num = "";
	while(x != 0) {
		stringstream ss;
		ss << (x&1);
		num = ss.str() + num;
			x >>= 1 ;
	}
	return num;
}

bool esprimo(int a) {
	for(int i = 2; i*i <= a; i++)
		if(a%i == 0) return false;
	return true;
}
 unsigned long long  potencia(unsigned long long b, unsigned long long e) {
	 unsigned long long r = 1;
	while(e) {
		if(e&1) r *= b;
		b *= b;
		e >>=1;
	}
	return r;
}
int main() {
	unsigned long long b,e;
	cin >> b >> e;
	cout << potencia(b,e) << endl;
	
	/*vector<int>v;
	v.push_back(5);
	v.push_back(7);
	v.push_back(4);
	v.push_back(2);
	v.push_back(6);
	v.push_back(135);
	int n = min_element(v.begin(),v.end()) - v.begin();
	cout << v[n] << endl;*/
}
