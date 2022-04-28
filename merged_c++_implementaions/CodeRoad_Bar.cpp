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
using namespace std;
string s1[7] = {"fernet", "caipirinha", "cerveza", "ron", "vodka", "whisky", "singani"};
char str[20];
long long s2i(string str) { istringstream ss(str);long long nro; ss >> nro; return nro;}
bool found(string str){
  REP(i,7){
    if(s1[i]==str)
      return 1;
  }
  return 0;
}
int main(){
  int nc,n;S(nc);
  while(nc--){
    S(n);
    vector<long long> vn;
    vector<string> vc;    
    REP(i,n){
      scanf("%[^\n]\n",str);
      if(isdigit(str[0])){
	long long nro = s2i((string)str);
	if(nro<18)
	  vn.pb(nro);
      } else {	
	string aux = (string)str;
	if(found(aux))
	  vc.pb(aux);
      }
    }
    //#bebidas<=#personas
    printf("%d\n",(int)min((int)vn.size(),(int)vc.size()));
  }
  return 0;	
}
