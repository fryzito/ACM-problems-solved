#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string rpta;
long long int factorial(int n){
	long long int rpta = 1;
	for(int i = 1; i <= n; i++){
		rpta *= i;
	}
	return rpta;
}
string eliminar(string str, int i){
	for(int j = i; j < str.size(); j++){
		str[j]=str[j+1];
	}
	return str.substr(0,str.size()-1);
}
string hallar(string str, long long int n){
	if(n==0){
		rpta += str;
		str = rpta;
		rpta ="";
		return str;
	}
	else{
		int m = str.size();
		long long int f = factorial(m-1);
		int k = n/f;
		rpta += str[k];
		str = eliminar(str,k);
			n = n%f;
		return hallar(str,n);
	}
}
int main(){
	long long int n;
	int nu;
	string str;
	cin >> nu;
	for(int j = 0; j < nu; j++){
		cin >> str;
		cin >> n;
		sort(str.begin(),str.end());
		cout << hallar(str,n)<<endl;
	}
}
