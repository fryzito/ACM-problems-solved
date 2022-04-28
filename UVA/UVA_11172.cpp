#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MAXN 100005
#define dbg(x)cout<<#x<<" "<<x<<endl
int A[MAXN];
int main(){
	int n,a,b;scanf("%d\n",&n);
	while(n--){
		scanf("%d %d\n",&a,&b);
		if(a==b) printf("=\n");
		else if(a>b) printf(">\n");
		else printf("<\n");
	}
	return 0;
}
