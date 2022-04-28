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
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
char str[10];
int main(){
  scanf("%[^\n]\n",str);
  string s1(str);
  s1[2]=' ';
  istringstream ss(s1);
  string aux;
  int th,ts;
  int th2,ts2;
  ss >> th >> ts;
  scanf("%[^\n]\n",str);
  string s2(str);
  s2[2]=' ';
  istringstream ss2(s2);
  ss2 >> th2 >> ts2;
  int h,m;
  m=(ts-ts2+60)%60;
  if(ts-ts2<0) th--;
  h=(th-th2+24)%24;
  if(h<10)
    printf("0%d:",h);
  else
    printf("%d:",h);
  if(m<10)
    printf("0%d\n",m);
  else
    printf("%d\n",m);
  return 0;    
}
