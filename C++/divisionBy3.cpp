#include <cstdio>
#include <iostream>
#include <vector>
#define pb push_back
#define MAXN 30000
using namespace std;
vector<unsigned int> v;
void init() {
	unsigned int max = 2147483647;
	v.push_back(0);
	for (unsigned int i = 1; i < max ; i++) {
		v.push_back((v[i-1]+i)%3);
	}
}
int main() {
	init();
	int n, a, b, cont = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cont = 0;
		cin >> a >> b;
		for (int j = a; j <= b; j++) {
			if (v[j]%3 == 0)
				cont++;
		}
		printf("Case %d: %d\n",i+1,cont);
	}
	return 0;
}
