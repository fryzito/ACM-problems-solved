#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#define MAXN 1000000
using namespace std;
long long int dp[MAXN];

int MOD(int numero) {
  map<int,int> mapa;
       int j=2, k = numero;
       while(k != 1) {
  	 if(k%j==0) {
	   if(mapa.find(j)==mapa.end()) {
	     mapa[j]=1;
	     k=k/j;
	   }
	   else {
	     mapa[j]++;
	     k = k/j;
	   }	  
	 }
	 else
	   j++;
       }
       int SD = 1;
       for(map<int,int>::iterator it=mapa.begin();it!=mapa.end();it++) {
	 //dbg2((*it).first,(*it).second);
 	 SD *= (pow((*it).first,(*it).second+1) - 1) / ((*it).first -1);
       }
       return SD;
}
int main() {
  dp[0] = 1; int n, A, B;
  for(int i=1; i<MAXN;i++)
    dp[i] = dp[i-1]+MOD(i);

  scanf("%d\n",&n);
  for(int i=0; i<n; i++) {
    cin >> A >> B;
    printf("Case %d: %lld\n",i+1,dp[B]-dp[A]);
  }

  for(int i=MAXN-10; i<=MAXN; i++) {
    cout << dp[i] << endl;
  }
  return 0;
}
