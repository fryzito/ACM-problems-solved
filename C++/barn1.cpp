/*
ID: fryzito
LANG: C++
TASK: barn1
*/
#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y) cout << #x << " = " << x << " " << #y << " = " << y << endl;
using namespace std;
int caso = 0;
int f(bool a[],int ini, int fin,int m) {
	if(m == 1) return 0;
	int hueco = 0, cont = 0, be, en,inihueco, finhueco;
	for(int i = ini; i <= fin; i++) {
		if(!a[i]) {
			be = i;
			while(!a[i]) {
				cont++;
				i++;
			}
			en = i-1;
			if(hueco < cont) {
				hueco = cont;
				inihueco = be;
				finhueco = en;
			}
			cont = 0;
		}
	}
	for(int i = inihueco; i <= finhueco; i++) a[i] = true;
	
	return (hueco + f(a,ini,fin,m-1));
}
int main() {
	freopen("barn1.in" , "r" , stdin);
	freopen("barn1.out" , "w" , stdout);
	int m, s, c, j;
	cin >> m >> s >> c;
	caso = c;
	bool a[s+1];
	memset(a,false,sizeof a);
	for(int i = 0; i < c; i++) {
		cin >> j;
		a[j] = true;
	}
	
	int ini = 0, fin = s;
	while(!a[ini]) ini++;
	while(!a[fin]) fin--;

	int rpta = (fin - ini) + 1;
	rpta = rpta - f(a,ini,fin,m);
	cout << rpta << endl;
	return 0;
}

