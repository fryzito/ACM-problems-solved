#include <cstdio>
#include <iostream>
#include <vector>
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int a, b;
vector <int> v;
void Hallar(int a, int b) {
	if(b == 0) return;
	if (b>a) {
		v.pb(0);
		Hallar(b,a);
	}
	else {
		if(b==1) {
			v.pb(a);
			return;
		}
		else {
			v.pb(a/b);
			Hallar(b,a%b);
		}
	}
}
int main() {
	while(cin >> a, cin >> b) {
		if(a == 1) {
			v.push_back(0);
			v.push_back(b);
		}
		else {
			Hallar(a,b);
//			v.erase(v.begin()+ (v.size()-1));
		}
		//escribirvector con resultados
		printf("[%d;",v[0]);
		for (int i  = 1; i < v.size(); i++){
			if(i==1)
				cout << v[i];
			else
				cout << "," << v[i];
		}
		cout << "]"<< endl;
		v.clear();
	}
	return 0;
}

