#include <cstdio>
using namespace std;
#define P(x) printf("%d\n",x)
#define S(x) scanf("%d",&x)
int main(){
	int k,d;
	scanf("%d %d\n",&k,&d);
	if(d==0&&k>1) printf("No solution\n");
	else {
		printf("%d",d);
		for(int j=0;j<k-1;j++)
			printf("0");
		putchar('\n');
	}
	return 0;
}