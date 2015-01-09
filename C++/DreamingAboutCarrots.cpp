#include <cstdio>
#include <iostream>
#include <math.h>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int main() {
	int n, x1, y1, x2, y2;
	cin >> n;
	while(n--) {
		cin >> x1 >> y1 >> x2 >> y2;
		int count = 0;
		if (x1 < x2){
			double m = ((double)y2 - (double)y1) / ((double)x2 - (double)x1);
			double b = (double)y1-((double)x1*(double)m);
			printf("m = %f\n",m);
			printf("b = %f\n",b);
			for (int i = x1; i <= x2; i++) {
				double y = (double)m*(double)i + b;
				printf("y = %f , %d\n",y,i);
				if(ceil(y) == y) {
					count++;
					dbg(count);
				}
			}
			cout << count-2 << endl;
		}
		else {
			double m = ((double)y1 - (double)y2) / ((double)x1 - (double)x2);
			double b = (double)y1-((double)x1*(double)m);
			printf("m = %f\n",m);
			printf("b = %f\n",b);
			for (int i = x2; i <= x1; i++){
				double y = (double)m*(double)i + b;
				printf("y = %f , %d\n",y,i);
				if(ceil(y) == y ){
					count++;
					dbg(count);
				}
			}
			cout << count-2 << endl;
		}
	}
}
