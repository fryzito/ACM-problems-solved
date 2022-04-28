// problema del top coder contando rectangulos de lago n i ancho m
#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector <int> arreglo(int n){
	vector <int> v;
	for(int i =0; i < n; i++){
		for(int j = 0; j < n-i; j++){
			v.push_back(i+1);
		}
	}
	return v;
}
int main(){
	int n,m;
	int rpta = 0;
	vector <int> v1,v2;
	cin >> n >> m;
	v1 = arreglo(n);
	v2 = arreglo(m);
	
	if(n < m){
		int aux = v1.size();
		int aux1 = v2.size();
		for(int i = 0; i < aux; i++){
			rpta += aux1 - ((m+1) - v1[i]);
		}	
	}
	else{
		int aux = v2.size();
		int aux1 = v1.size();
		for(int i = 0; i < aux; i++){
			rpta += aux1 - ((n+1) - v2[i]);
		}
	}
	cout<<rpta<<endl;
}
