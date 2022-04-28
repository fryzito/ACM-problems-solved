#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int main() {
	char n;
	vector <char> v;
	vector <char>::iterator it;
	while(cin >> n) {
		v.push_back(n);
	}
	sort(v.begin(),v.end());//Ordenar
	for(it = v.begin(); it!=v.end();it++){
		cout<<*it;
	}
}
