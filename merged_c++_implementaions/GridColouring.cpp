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
vector<string> vstr;
string str;
char ch;
void go(int i, int j, char fill) {
	if(i>= 0 && j >= 0 && i < vstr.size() && j < vstr[i].size()) {
		if(vstr[i][j] != ch  && vstr[i][j] != fill) {
			vstr[i][j] = fill;
			go(i,j+1,fill);
			go(i+1,j,fill);
			go(i-1,j,fill);
			go(i,j-1,fill);
		}
	}
	return;
}
void backtrack(int i, int j) {
	if(j == vstr[i].size()) {i++;backtrack(i,0);return;}
	if(vstr[i][j] == ' ') backtrack(i,j+1);
	else {
		ch = vstr[i][j];
		f(a,1,vstr.size())
			f(b,0,vstr[a].size()) {
				if(vstr[a][b] != ' ' && vstr[a][b] != ch) {
					char aux = vstr[a][b];
					vstr[a][b] = ' ';
					go(a,b,aux);
				}
			}
	}
	return;
}
int main() {
	while(getline(cin,str)) {
		vstr.clear();
		vstr.pb(str);
		getline(cin,str,'\n');
		while(str[0]!='_') {
			vstr.pb(str);
			getline(cin,str,'\n');
		}
		backtrack(1,0);
		vstr.pb(str);
		f(i,0,vstr.size()) {
			f(j,0,vstr[i].size())
				cout << vstr[i][j];
			cout << endl;
		}
	}
	return 0;
}
