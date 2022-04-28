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
#define poner push_back
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

long long toi(string s){istringstream is(s);long long x;is>>x;return x;}
string tos(long long t){stringstream st; st<<t;return st.str();}
long long gcd(long long a, long long b){return __gcd(a,b);}long long lcm(long long a,long long b){return a*(b/gcd(a,b));}

using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	int cont1 = 0,cont2 = 0;
	for ( int i = 0; i < n; i++) {
		dbg(cont1++);
		dbg(++cont2);
	}
	cout << endl;
	for(int i = 0; i < n ; ++i) cout << i << " ";
	cout << endl;
	return 0;
}

