//utilizando pair con vectores para poder resilver problemas como de USACO "Milking crow"
#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main() {
	vector <pair <int,int> > v;
	pair <int,int> p;
	int n;
	int var1,var2;
	cout<<"Ingrese el numero de datos: ";
	cin >>n;
	for(int j =0; j<n; j++) {
		cin >> var1 >> var2;
		p = make_pair(var1,var2);
		v.push_back(p);
	}
	sort (v.begin(),v.end());
	cout<<"";
	for(int j =0; j<n; j++) {
		cout << v[j].first <<"  "<< v[j].second << endl;
	}
}
