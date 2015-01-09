#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int n;
	int num;
	string plb;
	int cont = 0;
	cin >> n;
	int lis[n];
	for(int k = 1; k <= n; k++) {
		cin >> num;
		for(int j = 0 ; j < num; j++) {
			cin >> plb;
			if(plb == "sheep") {
				cont++;				
			}		
		}
		lis[k]=cont;
		cont = 0;
	}
	for(int h = 1; h <= n; h++) {
		printf("Case %d: This list contains %d sheep.",h,lis[h]);
		if(h != n) {
			cout<<"\n";
			cout<<"\n";
		}
		else
			cout <<"\n";
	}	
}
