#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MAXN 1003
#define dbg(x)cout<<#x<<"="<<x<<endl
#define EPS (1e-4)
int A[MAXN];
int main(){
	int n,a,b,m;scanf("%d\n",&n);
	while(n--){
		scanf("%d",&m);
		int sum=0;
		int cont=0;
		for(int i=0;i<m;i++){
			scanf("%d",&A[i]);
			sum+=A[i];
		}
		//dbg(sum);
		double promedio = (double)sum/(double)m;
		//dbg(promedio);
		for(int i=0;i<m;i++){
			if(promedio<(double)A[i]){
				//dbg(A[i]);
				cont++;
			}
		}
		//dbg(cont);
		printf("%.3lf%%\n",((double)cont*100)/(double)m);
	}
	return 0;
}