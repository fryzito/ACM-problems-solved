//problema del uva cous cuting escojer el numero intermedio
#include<cstdio>
#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){
	int a,b,c,n;
	cin >> n;
	for(int i = 0 ; i < n; i++){
		cin >> a >> b >> c;
		vector<int> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(),v.end());
		cout << "Case "<<i+1<<": "<<v[1]<<endl;
	}
}
