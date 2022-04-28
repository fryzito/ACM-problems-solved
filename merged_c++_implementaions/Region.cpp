//Problema del UVa, hallar el area comprendida entre tres circunferencias de radios r1, r2, r3.
#include<cstdio>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
#include<math.h>
#define REP( i, a, b) for(int i = int(a); i < int(b); i++)
#define ALL(x) (x).begin(),(x).end()
#define dbg(x); cout << #x << " = " << x << endl;
using namespace std;
int main() {
	int n;
	double r1, r2, r3;
	cin >> n ;
	while(n--) {
		cin >> r1 >> r2 >> r3;
		double a = r1 + r2;
		double b = r2 + r3;
		double c = r3 + r1;
		double p = a + b + c; double s = 0.5 * p;
		double area = sqrt( s * (s - a) * (s - b) * (s - c));
		double teta1 = acos( (a*a + c*c - b*b)  / (2*a*c) );
		double teta2 = acos( (a*a + b*b - c*c) / (2*a*b) );
		double teta3 = acos( (b*b + c*c - a*a) / (2*b*c) );
		double areacirculos = (teta1*r1*r1)/2 + (teta2*r2*r2)/2 + (teta3*r3*r3)/2;
		printf("%lf \n",area - areacirculos);
	}
}
