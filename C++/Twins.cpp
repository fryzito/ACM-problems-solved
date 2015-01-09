#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main() {
	int n, aux, sum = 0;
	cin >> n;
	vector <int> v;
	
	for(int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
		sum += aux;
	}
	
	sort(v.begin(),v.end());
	//for (int k = 0; k < n; k++) cout << v[k] << " ";
	//cout << endl;
	int	sum2 = 0, cont = 0;
	int j = n-1;
	while(sum2 <= sum/2 && j >= 0) {
		sum2 += v[j];
		cont++;
		j--;
	}
	cout  << cont << endl;
	return 0;
}

