#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#define dbg(x) cout << #x << " = " << x << endl 
using namespace std;
int main(){
	int n;
	scanf("%d\n",&n);
	vector<int> A(0,n+1);
	A.push_back(-1);
	for(int i=1; i<=n; i++) {
		cin >> A[i];
	}
	
	sort  (A.rbegin(),A.rend());
	
	for(int i=1; i<=n; i++)
		cout << A[i] << " ";
	cout << endl;
	
	for(int i=1; i<=n; i++) {
		dbg(A[i]);
		if(i != A[i]) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}
