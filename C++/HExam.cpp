#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
bool busqueda_dicotomica(vector<long long> v, long long principio, long long fin, long long x){
    bool res;
    if(principio < fin){
        int m = (principio + fin)/2;
        if(x < v[m]) res = busqueda_dicotomica(v, principio, m, x);
        else if(x > v[m]) res = busqueda_dicotomica(v, m+1, fin, x);
        else res = true;
    }else res = false;
    return res;
}
int main() {
	vector <long long> v1;
	vector <long long> v2;
	long long n,n1;
	long long m,m1;
	cin >> n;
	int cont=0;
	for(int k=0; k<n; k++) {
		cin >> n1;
		v1.push_back(n1);
	}
	cin >> m;
	for(int j=0;j<m;j++){
		cin >> m1;
		v2.push_back(m1);
	}
	sort(v1.begin(),v1.end());
	for(int k=0;k<m;k++){
		if(busqueda_dicotomica(v1,0,m,v2[k])){
			cont = cont + 1;
		}
	}
	cout<<cont;	
	return 0;
}
