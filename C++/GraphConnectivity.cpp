 #include <cstdio>
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
#define MAXN 100
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
 int P[MAXN];
 int find(int i) { return (P[i] == -1 ? i : P[i] = find(P[i])); }
 void join(int i, int j) { if(find(i)!=find(j)) P[find(i)] = find(j); }
 void init(int n) {fill(P,P+n,-1);}
 bool isSameSet(int i, int j) { return find(i) == find(j); }
 int main() {
	int n;	string ch;	char str[3];
	cin >> n;
	int m = n;
	while(n--) {
		vector<int> v;
		if (n == m-1) {
			getline(cin,ch);
			getline(cin,ch);
			getline(cin,ch);
		}
		else
			getline(cin,ch);
		init(ch[0]-'A'+1);
		while(gets(str) && str[0]) {
			join(str[0]-'A',str[1]-'A');
		}
		int cont = 1;
		for (int i = 0; i <= ch[0]-'A'; i++) {
			v.push_back(find(i));
		}
		sort (v.begin(),v.end());
		for(int i = 1; i < v.size(); i++) {
			if(v[i-1] != v[i])
				cont++;
		}
		if(n)
			cout << cont << endl << endl;
		else
			cout << cont << endl;
	}
 }
