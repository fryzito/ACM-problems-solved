#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<cstring>
#include<algorithm>
#include<sstream>
#define ll long long
#define vint vector<int>
#define f(i,x,y) for(int i=x;i<y;i++)
#define fd(i,y,x) for(int i=y;i>=x;i--)
#define clr(A,x) memset(A,x,sizeof(A))
#define oo (1<<30)
#define eps (1e-9)
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define pb push_back
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
bool esvalido(string str) {
	if(str.size()==0) return 0;
	if(str =="0") return 1;
	if(str.size()>7) return 0;
	if(str[0]=='0') return 0;
	int x = s2i(str);
	return x<=1000000;
}
int main() {
	string str;
	getline(cin,str);
	int rpta = -1;
	f(i,1,str.size()) {
		f(j,i+1,str.size()) {
			string s1 = str.substr(0,i);
			string s2 = str.substr(i,j-i);
			string s3 = str.substr(j);
			if(esvalido(s1)&&esvalido(s2)&&esvalido(s3)) rpta = max(rpta,s2i(s1)+s2i(s2)+s2i(s3));
		}
	}
	printf("%d\n",rpta);
	return 0;
}
