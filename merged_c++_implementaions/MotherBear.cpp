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

int main(){
	string str;
	while(getline(cin,str)&& str!="DONE") {
		string str1 = "";
		f(i,0,str.size()) {
			if(isalpha(str[i])) {
				if(isupper(str[i]))
					str1 += tolower(str[i]);
				else
					str1 += str[i];
			}
		}
		int n = str1.size(); bool pal = true;
		f(i,0,n/2) {
			if(str1[i] != str1[n-i-1]) {
				pal = false;
				break;
			}
		}
		if(pal)
			printf("You won't be eaten!\n");
		else
			printf("Uh oh..\n");
	}
	return 0;	
}

