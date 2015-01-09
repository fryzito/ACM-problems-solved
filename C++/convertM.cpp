#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n;
	cin >> n;
	int m[n][n];
	for(int y = 0; y < n; y++){
		for(int x = 0; x < n; x++){
			cin >> m[x][y];
		}
	}
	for(int y = 0; y < n; y++){
		for(int x = 0; x < n; x++){
			cout << m[x][y]<<" ";
		}
		cout<<"\n";
	}
}
