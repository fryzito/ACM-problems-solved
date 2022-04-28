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
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define fd(i,y,x) for(int i=y;i>=x;i--)
#define clr(A,x) memset(A,x,sizeof(A))
#define oo (1<<30)
#define eps (1e-9)
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int A[1003];
int main(){
  int n;S(n);
  vector<pair<int,int> > v;
  int i;
  REP(i,n){
    scanf("%d",&A[i]);
    if(i){
      v.pb(mp(A[i-1],A[i]));
    }
  }
  sort(all(v));
  bool goal=0;
  REP(i,v.size()-1){
    if(v[i].s>v[i+1].f&&v[i].s<v[i+1].s){
      printf("yes\n");
      goal =1;
      break;
    }
  }
  if(!goal) printf("no\n");
  return 0;
}
