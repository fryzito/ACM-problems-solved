#include <iostream>
#include <cstdio>
#define dbg(x) cout << #x << " = " << x << endl;
 using namespace std;
 int main()
 {
	string a;
	int contador = 0;
	char var;
	getline(cin,a);
	cin >> var;
	for(int i = 0; i < a.length();i++){
		if(var == a[i]) {
			contador++;
		}
	}
	cout<<contador;
	return 0;	
}
