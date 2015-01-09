#include <stdio.h>
#include <algorithm>
int A, D;
int B[11];
int C[11];
using namespace std;
int main(){
	int i;
	//freopen("he.in", "r", stdin);
	scanf("%d %d", &A, &D);
	while(A || D){
		for(i=0; i<A; i++)
		scanf("%d", B + i);
		for(i=0; i<D; i++)
		scanf("%d", C + i);
		sort(B, B + A);
		sort(C, C + D);
		printf("%c\n", B[0] < C[1] ? 'Y' : 'N');
		scanf("%d %d", &A, &D);
	}
	return 0;
}
