#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector <string> decode(string s){
	int P[100],Q[100], n = s.size();
	vector<string> rpta;
	if(n == 1){
				if(s[0]=='0'){
				rpta.push_back("0");
				rpta.push_back("NONE");				
				return rpta;
				}											
				if(s[0]=='1'){
				rpta.push_back("NONE");
				rpta.push_back("1");				
				return rpta;
				}												
				rpta.push_back("NONE");
				rpta.push_back("NONE");
				return rpta;
				}
	for(int i=0; i<n ; i++) Q[i]=s[i]-'0';
	P[0]=0;
	for(int p=0; p<2; p++){
		string p="";
		P[1]=Q[0]-P[0];
		for(int i=1; i<n-1; i++) P[i+1]= Q[i]-P[i]-P[i-1];
		for(int i=0; i<n; i++) p += (P[i]+'0');
		for(int i=0; i<n; i++) if(p[i] != '0' && p[i] != '1') p="NONE";
		if(P[0]+P[1]!= Q[0]) p="NONE";
		for(int i=1; i<n-1; i++) if(P[i]+P[i-1]+P[i+1] != Q[i]) p="NONE";
		if(P[n-1]+ P[n-2] != Q[n-1]) p="NONE";
		rpta.push_back(p);
		P[0]=1;
	}
	return rpta;
}
int main(){
	string cadena;
	cin >> cadena;
	vector <string> v;
	v = decode(cadena);
	cout<<v[0]<<"  "<<v[1];
}
