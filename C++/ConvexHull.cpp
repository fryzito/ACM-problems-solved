#include <cstdio>
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;
struct point { int x, y;} ;
point pivot;
vector <point> Polygon, CH;
int turn(point p, point q, point r) {
	int result = (r.x - q.x) * (p.y - q.y) - (r.y - q.y) * (p.x - q.x);
	if (result < 0) return -1;
	if (result > 0) return 1;
	return 0;
}

bool ccw(point p, point q, point r) { return ( turn(p, q, r) > 0 ); }

int area2(point a, point b, point c) {
	return a.x * b.y  -  a.y*b.x  +  b.x *c.y  -  b.y * c.x  +  c.x * a.y  -  c.y * a.x;
}
int dist2(point a, point b) {
	int dx = a.x - b.x, dy = a.y - b.y; return dx*dx + dy*dy;
}
bool angle_cmp(point a, point b) {
	if (area2(pivot, a, b) == 0) // son colianes
		return dist2(pivot , a) < dist2(pivot, b);
	int d1x = a.x - pivot.x, d1y = a.y - pivot.y;
	int d2x = b.x - pivot.x, d2y = b.y - pivot.y;
	return (atan2( (double)d1y, (double)d1x ) - atan2( (double)d2y, (double)d2x )) < 0;
}
vector<point> GrahamScam(vector<point> Polygon) {
	//primero, encontrar p0 = point con menor y i si son iguales menoy x;
	int i, P0 = 0, N = Polygon.size();
	for (int i = 1; i < N; i++)
		if (Polygon[i].y < Polygon[P0].y || (Polygon[i].y == Polygon[P0].y && Polygon[i].x > Polygon[P0].x))
			P0 = i;
			
	point temp = Polygon[0]; // swap selected vettex with Polygon[0]
	Polygon[0] = Polygon[P0];
	Polygon[P0] = temp;
	
	pivot = Polygon[0];
	sort (++Polygon.begin(),Polygon.end(),angle_cmp);
	
	stack<point> S;
	point prev, now;
	S.push(Polygon[N-1]);
	S.push(Polygon[0]);
	
	i = 1;
	while ( i < N) {
		now = S.top();
		S.pop(); prev = S.top(); S.push(now);
		if(ccw(prev, now, Polygon[i])) {  // if these 3 points make a left turn
			S.push(Polygon[i]);
			i++;
		}
		else
			S.pop();
	}
	vector<point> ConvexHull;
	while (!S.empty()) {
		ConvexHull.push_back(S.top());
		S.pop();
	}
	ConvexHull.pop_back();// el siguiente es duplicado del primero
	
	return ConvexHull;
}

int main() {
	int n,m;
	cin >> n;
	while(n--) {
		vector<point> v, v1;
		point p; char ch;
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> p.x >> p.y;
			cin >> ch;
			v.push_back(p);
		}
		v1 = GrahamScam(v);
		cout << v1.size() << endl;
		for (int i = 0; i < v1.size(); i++) {
			cout << v1[i].y << " " << v1[i].x << endl;
		}
	}
	return 0;
}
