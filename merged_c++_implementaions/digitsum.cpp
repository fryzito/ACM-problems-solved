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
long long s2i(string str) { istringstream ss(str);long long nro; ss >> nro; return nro;}
int A[20];
int main(){
  int n;
  long long rpta;
  SC(n);
  while(n){
    rpta=INF;

    REP(i,n){
      SC(A[i]);
    }
    sort(A,A+n);
    // REP(i,n){
    //   dbg(A[i]);
    // }
    //combinatory
    for(int mask=1;mask<(1<<n)-1;mask++) {
      long long nro1=0,nro2=0;
      string  s1="",s2="";
      bool fir2=1,fir1=1;
      bool flag=1;
      for(int j=0;j<n ;j++){
	if(mask&(1<<j)) {
	  s1+='0'+A[j];
	} else {
	  s2+='0'+A[j];
	}
      }
      // dbg2(s1,s2);
      if(s1[0]=='0'&&(int)s1.size()>1){
	int j=0;
	while(s1[j]=='0'&&j<s1.size()) j++;
	if(j!=s1.size())
	  swap(s1[j],s1[0]);
	else flag=0;
      }
      if(s2[0]=='0'&&(int)s2.size()>1){
	int j=0;
	while(s2[j]=='0'&&j<s2.size()) j++;
	if(j!=s2.size())
	  swap(s2[j],s2[0]);
	else flag=0;
      }
      if(!flag) continue;
      nro1=s2i(s1);
      nro2=s2i(s2);
      // dbg2(s1,s2);
      // dbg2(nro1,nro2);
      rpta=min(rpta,nro1+nro2);
    }
    printf("%lld\n",rpta);
    SC(n);    
    
  }
  return 0;	
}
