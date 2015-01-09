#include<cstdio>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
#define REP( i, a, b) for(int i = int(a); i < int(b); i++)
#define ALL(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
	vector<string> v;
	int i,n,cont=0;
	bool firts = true;
	string str;
	cin >> n;
	while(getline(cin,str)){
		istringstream ss(str);
		while(ss>>(str) && firts){
			v.pb(str);
			firts = false;
		}
		firts = true;
	}
	sort(ALL(v));
	for(int j = 0; j < n-1; j++){
		if(v[j] == v[j+1])
			cont++;
		else{
			cont++;
			cout << v[j] << " " << cont << endl;
			cont=0;
		}
		if(j==n-2) {
			if(v[j+1]==v[j]){
				cont++;
				cout << v[j+1] << " " << cont << endl;
			}
			else{
				cout << v[j+1] << "1" << cont << endl;
			}
		}
	}
}
