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
#define VI vector<int>
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define REPR(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define eps (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
#define ull unsigned long long
using namespace std;
string A[5] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
int main(){
  ull nro=0;
  int i=0;
  vector<int > v;
  while(nro<=1000000000LL){
    nro+=(1<<i)*5;
    //    dbg2(nro,i);
    v.pb(nro);
    i++;
  }
  ull n;
  cin >> n;
  int id = lower_bound(v.begin(),v.end(),n)-v.begin();
  int aux;
  if(id>0) {
    aux = v[id]-v[id-1];
    n=n-v[id-1];
  }
  else {
    aux = v[id];
  }
  //dbg(n);
  cout <<A[ ((n-1)/(1<<id)) ]<< endl;
  //dbg(id);
  //dbg(aux);
  return 0;	
}
