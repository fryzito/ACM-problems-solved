#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#define ll long long int
#define VI vector<int>
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define REPR(i,y,x) for(int i=y;i>=x;i--)
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
#define MAXN 22
using namespace std;
char str[MAXN];
long long int gcd(long long int a, long long int b){
  if (a<b)    return gcd(b,a);
  if (b==0)    return a;
  else    return gcd (b,a%b);
}
ll lcm(ll a,ll b){  return (a*b)/gcd(a,b);}
int main(){
  while(scanf("%[^\n]\n",str)&&str[0]!='*'){
    ll aux=1;
    if(str[0]=='N'){ printf("-1\n");continue;}
    int n = strlen(str); 
    vector<int> v;
    REP(i,n){
      if(str[i]=='Y'){	
	aux = lcm(aux,i+1);
      } else if(str[i]=='N'){
	v.pb(i+1);
      }
    }
    bool found=0;
    REP(i,v.size()){
      if(aux%v[i]==0) {
	found=1;
	break;
      }
    }
    if(found)
      printf("-1\n");
    else
      printf("%lld\n",aux);
  }
  return 0;	
}
