#include <cstdio>
#include <iostream>
#include <bitset>
#include <vector>
#include <utility>
#define ll long long
using namespace std;
ll _sieve_size;
bitset<10000010> bs;
vector<int> primes;
void sieve(ll upperbound) {
	_sieve_size=upperbound+1;
	bs.set();
	bs[0]=bs[1]=0;
	for(ll i=2;i<=_sieve_size;i++) if(bs[i]) {
		for(ll j=i*i;j<= _sieve_size;j+=i) bs[j]=0;
		primes.push_back((int)i);
	}
}
int main() {
		sieve(1000000);
		int n;
		/*for(int i=0;i<10;i++)
			printf("%d\n",primes[i]);*/
		while(scanf("%d\n",&n)==1){
			printf("(%d, %d)\n",primes[n],primes[n]+2);
		}
	return 0;
}