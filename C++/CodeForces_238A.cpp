#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
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
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
char str[3003];
int main(){
  int n;S(n);
  scanf("%[^\n]",str);
  int i=0,cont=0,rpta=0;
  pair<char,int> p;
  //Begining
  while(str[i]=='.'&&i<n) i++;
  if(i!=n){
    if(str[i]=='R') rpta=i;

    p=mp(str[i],i);
    i++;
    // Middle
    for(;i<n;i++){
      if(str[i]!='.') {
	if(p.f=='R'&&str[i]=='L') {
	  if((i-p.s-1)&1) {
	    rpta+=1;
	  }
	} else {
	  rpta+=(i-p.s-1);
	}
	p=mp(str[i],i);
      }
    }
    //Final
    if(p.f=='L')
      rpta+=(n-p.s-1);
    P(rpta);
  } else {
    P(n);
  }
  return 0;	
}
