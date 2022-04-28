// problema del UVa( 10911 - Forming Quiz Teams) encontrar la suma de todas las distancias de pares de casa
#include<iostream>
#include<algorithm>
#include <stdio.h>
#include <math.h>
#include<string>
#include<sstream>
#define REP( i, a, b) for(int i = int(a); i < int(b); i++)
#define dbg(x) cout << #x << " = " << "\n";
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
using namespace std;
int main(){
	int n, a, x1, y1, x2, y2, cont = 1;
	double rpta = 0,sum1 = 0, sum2 = 0;
	string name1, name2;
	cin >> a;
	while(a) {
		while(a) {
		cin >> name1;
		cin >> x1 ;  cin >> y1;
		cin >> name2;
		cin >> x2 ;  cin >> y2;
		sum1 += abs(x1 - x2);
		sum2 += abs(y1 - y2);		
		a--;
		}
		rpta += sqrt(pow(sum1,2) + pow(sum2,2));
		cout << "Case " << cont << ": ";
		printf("%.2f\n",rpta);
		cont++;
		rpta = 0; sum1 = 0; sum2 = 0;
		cin >> a;
	}
	return 0;
}
