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
  int nc, n, m;
  scanf("%d",&nc);
  f(cases,0,nc){
    scanf("%d %d",&n,&m);
    int v[n]; int cont = 0;
    f(i,0,n) {
      scanf("%d",v+i);
    }
    for(int mask=1; mask < (1<<n); mask++) {
      int s = 0;
      for(int j=0; j<n; j++) {
	if( ((mask>>j) & 1) != 0) {
	  s += v[j];
	}
      }
      if(s%m == 0) {
	cont++;
      }
    } 
    printf("Case #%d: %d\n",cases+1,cont);
  }
  return 0;
}
