#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n,cont=0;
	scanf("%d",&n);
	while(n>=0) {
		printf("Case %d:\n",++cont);
		int mes[2][12];
		for(int i=0;i<12;i++) scanf("%d",&mes[0][i]);
		for(int i=0;i<12;i++) scanf("%d",&mes[1][i]);
		for(int k=0;k<12;k++) {
			if(n >= mes[1][k]) {
				n-=mes[1][k];
				printf("No problem! :D\n");
				n+=mes[0][k];
			}
			else {
				printf("No problem. :(\n");
				n+=mes[0][k];
			}
		}
		scanf("%d",&n);
	}
	return 0;
}
