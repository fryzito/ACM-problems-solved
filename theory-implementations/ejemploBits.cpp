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

int v[4] = {1,3,4,5};
int n = 4;
int c = 0;
int main(){
  for(int mask=0; mask < (1<<n); mask++) {
    int s = 0;
    for(int j=0; j<n; j++) {
      if( ((mask>>j) & 1) != 0) {
	s += v[j];
      }
    }
    if(s == 4) {
      c++;
    }
  }
  cout << c << endl;
  return 0;	
}

