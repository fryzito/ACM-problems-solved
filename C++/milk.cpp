/*
ID: fryzito
LANG: C++
TASK: milk
*/
#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#define pb push_back
#define mk make_pair
using namespace std;
int s;
vector <pair<int,int> > v;
int main () {
	freopen("milk.in" , "r" , stdin);
	freopen("milk.out" , "w" , stdout);
	int n, a, b, suma = 0, rpta = 0;
	cin >> s >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.pb(mk(a,b));
	}
	
	sort(v.begin(), v.end());
	
	int i = 0;
	while(suma < s){
		if(v[i].second == 0) i++;
		rpta += v[i].first;
		v[i].second--;
		suma ++;
	}
	cout << rpta << endl;
	return 0;
}

