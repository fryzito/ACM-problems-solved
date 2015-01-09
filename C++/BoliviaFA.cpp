#include <bits/stdc++.h>
#define REPN(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) REPN(i,0,n)
#define dbg(x)cout<<#x<<"="<<x<<endl
#define S(n) scanf("%d\n",&n)
#define SC(n) scanf("%d",&n)
#define S2(n,m) scanf("%d %d\n",&n,&m)
#define SC2(n,m) scanf("%d %d",&n,&m)
#define ll long long
using namespace std;
int m;
ll n;
ll A[21];
ll gcd(ll a,ll b){
  if (b==0) return a;
  else return gcd(b,a%b);
}
ll lcm(ll a,ll b){
  return a*b/(gcd(a,b));
}
int main(){
  map<int,int> ids;
  map<int,int> maskid;
  REP(i,22){
    ids[(1<<i)]=i+1;
    maskid[(1<<i)]=i;
  }
  scanf("%lld %d",&n,&m);
  
  while(n||m){
    ll sum=0;
    bool isone=0;
    REP(i,m){
      scanf("%lld",&A[i]);
      if(A[i]==1) isone=1;
      sum+=(n-1)/(A[i]);
      // dbg((n-1)/(A[i]));
    }
    if(isone){
      printf("%lld\n",n);      
    }else{
      // dbg(sum);
      set<ll> setp;
      for(int mask=1;mask<(1<<m);mask++) {
	ll mcm=1;
	if(ids[mask]!=0) continue;
	int aux=mask;
	while(aux){
	  int j=aux&(-aux);
	  ll nro=A[maskid[j]];
	  // dbg(maskid[j]);
	  if(mcm>nro)
 	    mcm=lcm(mcm,nro);
	  else
	    mcm=lcm(nro,mcm);
	  
	  // printf("%d ",nro);
	  aux-=j;
	}
	// putchar('\n');
	// for(int j=0;j<m;j++){
	//   if(mask&(1<<j)) {
	//     if(mcm>A[j])
	//       mcm=lcm(mcm,A[j]);
	//     else
	//       mcm=lcm(A[j],mcm);
	//     // printf("%d ",A[j]);
	//   }
	// }

	// dbg(mcm);

	if(setp.find(mcm)==setp.end()){
	  // dbg(mcm);
	  sum-= (n-1)/mcm;
	  setp.insert(mcm);
	}
	// dbg((n-1)/mcm);
      }
      printf("%lld\n",sum+1);
      scanf("\n");
    }
    scanf("%lld %d",&n,&m);
  }
  return 0;
}
