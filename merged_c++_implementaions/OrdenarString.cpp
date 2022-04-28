#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int main() {
	string my[8] = {"GERAR","FRANCIS","QUISPE","TORRES","GERAR","FRANCIS","QUISPE","TORRES"};
	vector <string> v (my,my+8);
	vector <string>::iterator it;
	sort(v.begin(),v.end());
	for(it = v.begin(); it!=v.end();it++){
		cout<<" "<<*it;
	}
}
