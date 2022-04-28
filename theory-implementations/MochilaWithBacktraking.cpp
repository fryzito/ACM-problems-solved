#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <stack>
#include <utility>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int n, s, rpta;
int v[n];
int w[n];
bool bol[n];
void backtrakin(int siguiente, int max, int s) {
	
}
int main() {
	n = 4, s = 14;
	v[n] = {1,2,3,4};
	w[n] = {5,6,7,8};
	memset(bol,0,sizeof(bol));
	backtrakin(0,0,0);
	cout << "La respues es :" << rpta << endl;
	//http://www.lcc.uma.es/~av/Libro/CAP7.pdf
}

