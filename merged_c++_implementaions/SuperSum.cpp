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
#define MOD 1000000007
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
ll SuperSum(int n,int k) {
  if(n==0) return k;
  return SuperSum(k,n);
}

int main(){
  int nc, n,k;
  scanf("%d",&nc);
  f(j,0,nc){
    scanf("%d %d\n",&k,&n);
    ll tablero[11][1001];
    memset(tablero,0, sizeof(tablero));
    f(i,0,k+1)
      tablero[i][1] = 1;
    f(i,1,n+1)
      tablero[0][i] = i;

    for(int i=1; i<= k; i++) {
      for(int j=1; j<= n; j++) {
	tablero[i][j] = ((tablero[i-1][j]%MOD) + (tablero[i][j-1]%MOD))%MOD;
      }
    }
    printf("Case #%d: %lld\n",j+1,tablero[k][n]);
  }
  return 0;	
}
