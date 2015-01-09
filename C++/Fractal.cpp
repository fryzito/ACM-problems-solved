#include <cstdio>
#include <iostream>
using namespace std;
void f(int n) {
	if(n==1)
		cout <<"U"<<endl;
	else{
		cout<<"U"<<endl;
		cout<<"U"<<"U"<<endl;
		f(n-1);
	}
}
int main() {
	int n;
	while(cin >> n) {
		f(n);
		cout<<"#";
	}	
}
