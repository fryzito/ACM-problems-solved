#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int hallar(int a, int b) {
	if(a==1 || b==1) return max(a,b);
	if(a==2 && b==2) return 4;
	if((a==3 && b==2)||(a==2 && b==3)) return 4;
	if(a == 2 || b==2) {
		if(b==2) swap(a,b);
		if(b%4==0) return b;
		if(b%4==1) return b+1;
		if(b%4==2) return b+2;
		if(b%4==3) return b+1;
	}
	return (int)ceil(((double)a*(double)b)/2);
}
int main() {
	double a,b;
	cin >> a >> b;
	while(a || b) {
		printf("%d knights may be placed on a %d row %d column board.\n",hallar(a,b),(int)a,(int)b);
		cin >> a >> b;
	}
	return 0;
}
