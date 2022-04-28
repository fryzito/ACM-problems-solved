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
#define fd(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define eps (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define RAL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define MAXN 10004
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
char str[30];
int sieve[MAXN+1];
int primes[MAXN+1];
int primesCount=1;
int f[1000+2];
void initCriba(){
  for(int i=2;i<=MAXN;i++) {
    if(!sieve[i]) {
      primes[primesCount]=i;
      sieve[i]=primesCount;
      primesCount++;
    }
    for(int j=1;j<=sieve[i]&&i*primes[j]<=MAXN;j++)
      sieve[i*primes[j]]=j;
  }
}
int main(){
  int n;S(n);
  int cases=0;
  while(n--){
    initCriba();
    scanf("%s\n",str);
    stringstream is((string)str);
    int nro; string s;
    is>>nro>>s;
    CLR(f,0);
    int k=s.size();
    double nrodiv=1;
    while(nro>0){
      int v=nro,s=1;
      while(v>1&&s<=primesCount) {
	while(v%primes[s]==0){
	  v/=primes[s];
	  f[s]++;
	}
	s++;
      }
      nro-=k;
    }
    for(int j=1;j<=1000;j++)
      nrodiv*=(f[j]+1.0);    
    if(nrodiv > 1e18)
      printf("Case %d: Infinity\n",++cases);
    else
      printf("Case %d: %.0lf\n",++cases,nrodiv);
  }
  return 0;	
}
