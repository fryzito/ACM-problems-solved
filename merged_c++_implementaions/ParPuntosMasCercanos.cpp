#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
#define pb push_back
#define REPN(a,b,n) for(int a = b; a < n; a++)
#define REP(a,n) REPN(a,0,n)

struct point {	double x, y; };
double dist(point a, point b) {
	double dx = a.x - b.x, dy = a.y - b.y; return dx * dx + dy * dy;
}

typedef vector <point> VP;
double closest_recursive(VP vx, VP vy){
	if(vx.size()==1) return 1e20; //infinity
	if(vx.size()==2) return dist(vx[0], vx[1]);
	point cut = vx[vx.size()/2];
	VP vxL = filter(vx : x < cut.x || x == cut.x && y <= cut.y);
	VP vyL = filter(vy : x < cut.x || x == cut.x && y <= cut.y);
	double dL = closest_recursive(vxL, vyL);
	VP vxR = filter(vx : !(x < cut.x || x == cut.x && y <= cut.y));
	VP vyR = filter(vy : !(x < cut.x || x == cut.x && y <= cut.y));
	double dR = closest_recursive(vxR, vyR);
	double d = min(dL, dR);
	VP b = filter(vy : abs(x cut.x) <= d);
	for(int i = 0; i < b.size(); i++)
		for(int j = i + 1; (j < b.size()) && ((b[j].y - b[i].y) <= d); j++)
			d = min(d, dist(b[i], b[j]));
	return d;
}

double closest(VP points){
	VP vx = sortInXY(points), vy = sortInYX(points);
	for(int i = 1; i < vx.size(); i++) if(vx[i -1] == vx[i]) return 0.0;
	return closest_recursive(vx, vy);
}

int main() {
	int i, n;
	cin >> n;
	VP v;
	REP(i,n){
		point p;
		cin >> p.x >> p.y;
		v.pb(p);
		cout << closest(v) << endl;
	}
}
