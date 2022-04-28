#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long n,i;
	i = 2;
	vector<int> v;
	cin >> n;
	while(n != i){
		if(n%i == 0){
			v.push_back(i);
			n = n/i;
		}
		else
			i = i+1;
	}
	v.push_back(i);
	for(int j=0; j < v.size(); j++){
		cout << v[j] << endl;
	}
}
