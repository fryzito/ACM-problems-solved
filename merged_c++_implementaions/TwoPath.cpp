#include <algorithm>
#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
struct point {
	int x;
	int y;
};
int main() {
	int n, a, b;
	cin >> n; vector <pair <int,int> > v;
	while(cin >> a, cin >> b) {
		if (a > b)
			v.push_back(make_pair(a,b));
		else
			v.push_back(make_pair(b,a));
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << " " << v[i].first << endl;
	}
	vector<int> rpta;
	for (int i =1; i < v.size(); i++) {
		if(v[i].second != v[i-1].second)
			rpta.push_back(v[i-1].first - v[i-1].second);
	}
	
	rpta.push_back(v[v.size()-1].first - v[v.size()-1].second);
	for (int i = 0; i < rpta.size(); i++) cout << rpta[i] << endl;
	sort (rpta.begin(), rpta.end());
	if (rpta.size() >= 2)
		cout << rpta[rpta.size()-1] * rpta[rpta.size() - 2] << endl;
	else
		cout << "0" << endl;	
}
