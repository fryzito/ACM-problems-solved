 #include <cstdio>
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
#define MAXN 100
using namespace std;
 int P[MAXN];
 int find(int i) { return (P[i] == -1 ? i : P[i] = find(P[i])); }
 void join(int i, int j) { if(find(i)!=find(j)) P[find(i)] = find(j); }
 void init(int n) {fill(P,P+n,-1);}
 bool isSameSet(int i, int j) { return find(i) == find(j); }
 int main() {
	init(5);
	join(0,1);
	join(0,2);
	join(3,1);
	cout << find(0) << endl;
	cout << find(1) << endl;
	cout << find(2) << endl;
	cout << find(3) << endl;
	cout << find(4) << endl;
 }
