#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>
using namespace std;
int main(){
	int x1, y1, x2, y2;
	double lvl;
	bool punts = true;
	vector <double> v;
	vector < pair < int,int > > vp;
	vector < pair <int,int> > vdp;
	for (int i = 0; i < 4; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		vdp.push_back(make_pair(x1,y1));
		vdp.push_back(make_pair(x2,y2));
		lvl =sqrt( pow(2,abs(x2 - x1)) + pow(2,abs(y2 - y1)));
		vp.push_back(make_pair(abs(x2-x1),abs(y2-y1)));
		v.push_back(lvl);
	}
	sort (v.begin(), v.end());
	sort (vp.begin(), vp.end());
	for (int i = 0; i < 8 ; i += 2) {
		if(vdp[i] == vdp[i+1])
			punts = false;
	}
	sort (vdp.begin(), vdp.end());
	for (int i = 0; i < 8; i += 2) {
		if(vdp[i] != vdp[i+1])
			punts = false;
	}
	for (int i = 1; i < 8; i += 2) {
		if(vdp[i] == vdp[i+1])
			punts = false;
	}
	if ((v[0] == v[1]) && (v[2] == v[3]) && ((vp[0].first*vp[2].first) + (vp[0].second * vp[2].second) == 0) && ((vp[1].first * vp[3].first) + (vp[1].second * vp[3].second) == 0) && punts)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
