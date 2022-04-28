#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
vector<int > v;
int main() {
	int n;scanf("%d\n",&n);
	while(n>=0) {
		while(n>=3) {
			v.push_back(n%3);
			n/=3;
		}
		v.push_back(n);
		for(int i=v.size()-1;i>=0;i--)
			printf("%d",v[i]);
		printf("\n");
		scanf("%d\n",&n);
		v.clear();
	}
	return 0;
}