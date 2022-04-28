#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int op, cont = 0;
float u, v, t, a, s;
int main() {
	cin >> op; cont++;
	while(op) {
		switch(op) {
		case 1:
			cin >> u >> v >> t;
			a = (v-u)/t;
			s = u*t + (a*t*t)/2;
			printf("Case %d: %.3f %.3f\n",cont,s,a);
			break;
		case 2:
			cin >> u >> v >> a;
			t = (v-u)/a;
			s = (u*t) + (a*t*t/2);
			printf("Case %d: %.3f %.3f\n",cont,s,t);
			break;
		case 3:
			cin >> u >> a >> s;
			v = sqrt(u*u + 2*a*s);
			t = (v-u)/a;
			printf("Case %d: %.3f %.3f\n",cont,v,t);
			break;
		case 4:
			cin >> v >> a >> s;
			u = sqrt((v*v) - (2*a*s));
			t = (v-u)/a;
			printf("Case %d: %.3f %.3f\n",cont,u,t);
			break;
		}
		cin >> op;
		cont++;
	}
	return 0;
}

