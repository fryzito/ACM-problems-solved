#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int sum, rest, A, B, n;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d",&sum,&rest);
		if ((sum+rest) % 2 == 0) {
			A = (sum + rest ) / 2;
			B = sum - A;
			if (B < 0)
				printf("impossible\n");
			else
				printf("%d %d\n",A,B);
		}
		else
			printf("impossible\n");
	}
	return 0;
}
