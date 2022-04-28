#include<cstdio>
#include <iostream>
#define dbg(x) cout << #x << " = " << x << "\n";
using namespace std;
void write (int x[],int n) {
	for (int i = 0 ; i < n; i++) {
		cout << x[i] << " ";
	}
}
int main() {
	int n;
	int lista[3];
	int count = 0;
	int indizador = 0;
	cin >> n;
	while (n) {
		int cerca[n];
		for(int i = 0;i < n;i++) {
				cin>> cerca[i];
		}
		for(int j = 0;j < n; j++) {
			if ((cerca[j%n] == cerca[(j+1)%n]) && (cerca[(j+1)%n] == cerca[(j+2)%n]) && (cerca[j%n] == 0)) {
				cerca[(j+1)%n] = 1;
				count++;
			}
		}		
		for(int j=0;j<n;j++) {
			if((cerca[j%n]==cerca[(j+1)%n]) && (cerca[(j+1)%n]==0)) {
				count = count + 1;
				cerca[(j+1)%n] = 1;
			}	
		}		
		cout << count << endl;
		count=0;
		cin >> n;
	}
}
