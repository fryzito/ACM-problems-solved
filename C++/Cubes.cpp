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
int main() {
	int nro,a1,b1;
	scanf("%d",&nro);
	while(nro) {
		bool bone = false;
		f(b,0,10000)
			f(a,0,10000)
				if(nro == (a-b)*((int)pow(a,2)+a*b+(int)pow(b,2))) {
					a1 = a;
					b1 = b;
					bone = true;
					break;
					break;
				}

		if(bone)
			printf("%d %d\n",a1,b1);
		else
			printf("No solution\n");
			
		scanf("%d",&nro);
	}
	return 0;
}
