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
#define mp make_pair
#define pb push_back
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}

int main() {
  int nc,p,a,b;
  scanf("%d",&nc);
  int vc = 0;
  while(nc--) {
    scanf("%d\n",&p);
    int mintime = 0;
    vector<pair<ll,ll> > v;
    for(int i=0; i<p; i++) {
      scanf("%d %d",&a,&b);
      v.pb(mp(a,b));
    }
    sort(v.begin(),v.end());
    ll last1=0; ll last2=0;
    for(int i=0; i<p; i++) {
      mintime += abs(v[i].first - last1) + abs(v[i].second - last2);
      last1 = v[i].first;
      last2 = v[i].second;
    }
    printf("Case #%d: %d\n",++vc,mintime);    
  }
  return 0;
}
