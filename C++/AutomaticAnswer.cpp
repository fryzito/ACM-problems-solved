#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#define REP( i, a, b) for(int i = int(a); i < int(b); i++)
#define dbg(x) cout << #x << " = " << "\n";
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
using namespace std;
string ToString(int n){
	stringstream ss;
	ss << n;
	return ss.str();
}
int main(){
	int ni,i,n;
	string str;
	cin >> ni;
	REP(i,0,ni){
		cin >> n;
		n = 315*n+36962;
		str = ToString(n);
		cout << str[str.size()-2] << endl;
	}
}
