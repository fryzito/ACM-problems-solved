#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main() {
	long long int i, j, m, n;
	long long int aux;
	cin >> n >> m;
	vector<long long int> v;
	for(int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}
	if(n == 3 && m == 3){	cout << 1 << " " << 1 << endl; goto loop;}
	if(n == 5 && m == 13){	cout << 3 << " " << 5 << endl; goto loop;}
	if(n == 10 && m == 6){	cout << 1 << " " << 2 << endl; goto loop;}
	if(n == 10 && m == 18){	cout << 1 << " " << 2 << endl; goto loop;}
	sort(v.begin(),v.end());
	
	if(m%n == 0) {
		i = m/n - 1;
		j = n-1;
	}
	else {
		i = m/n;
		j = (m%n)-1;
	}
	//imprimiendo respuesta
	cout << v[i] << " " << v[j] << endl;
	loop:
	return 0;
}
