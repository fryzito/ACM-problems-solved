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
char str[11];
bool ispalindrome(string s){
  int m = s.size()-1;
  REP(i,s.size()/2){
    if(s[i]!=s[m-i])
      return 0;
  }
  return 1;
}
int main(){
  scanf("%[^\n]",str);
  int n = strlen(str);
  vector<string> v;
  for(int mask=1;mask<(1<<n);mask++){
    string s="";
    for(int j=0;j<n;j++) {
      if(mask&(1<<j)) {
	s+=str[j];
      }
    }
    v.pb(s);
  }
  vector<string> rpta;
  vector<string>::iterator it;
  REP(i,v.size()){
    if(ispalindrome(v[i]))
      rpta.pb(v[i]);
  }
  int id = max_element(ALL(rpta))-rpta.begin();
  printf("%s\n",rpta[id].c_str());
  return 0;	
}
