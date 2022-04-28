/*
ID: fryzito
LANG: C++
TASK: transform
*/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

#define pb push_back
#define mp make_pair

#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a,b,sizeof(a))
#define REPN(x,a,b) for (int x=a; x<b;++x)
#define REP(x,b) REPN(x, 0, b)
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y) cout << #x << " = " << x << "    " << #y << " = " << y <<endl;
#define MAXN 10

char matrix[MAXN][MAXN];
char matrix1[MAXN][MAXN];
int n;

bool rotate90() {
	int x, y, x1, y1;
	for ( x = 0, x1 = 0; x < n; x++, x1++) {
		for ( y = 0, y1 = n-1; y < n; y++, y1--) {
			if (matrix1[x][y] != matrix[y1][x1])
				return false;
		}
	}
	return true;
}
bool rotate90(char *aux) {
	int x, y, x1, y1;
	for ( x = 0, x1 = 0; x < n; x++, x1++) {
		for ( y = 0, y1 = n-1; y < n; y++, y1--) {
			if (matrix1[x][y] != aux[y1*n+x1])
				return false;
		}
	}
	return true;
}
bool rotate180() {
	int x, y, x1, y1;
	for ( x = 0, x1 = n-1; x < n; x++, x1--) {
		for ( y = 0, y1 = n-1; y < n; y++, y1--) {
			if (matrix[x][y] != matrix1[x1][y1])
				return false;
		}
	}
	return true;
}
bool rotate270() {
	int x, y, x1, y1;
	for ( x = 0, x1 = n-1; x < n; x++, x1--) {
		for ( y = 0, y1 = n-1; y < n; y++, y1--) {
			if (matrix1[x][y] != matrix[x1][y1])
				return false;
		}
	}
	return true;
}
bool rotate270(char *aux) {
	int x, y, x1, y1;
	for ( x = 0, x1 = n-1; x < n; x++, x1--) {
		for ( y = 0, y1 = n-1; y < n; y++, y1--) {
			if (matrix1[x][y] != aux[x1*n+y1])
				return false;
		}
	}
	return true;
}
bool reflexition() {
	int x, y, x1, y1;
	for ( x = 0, x1 = 0; x < n; x++, x1++) {
		for ( y = 0, y1 = n-1; y < n; y++, y1--){
			if (matrix1[x][y] != matrix[x1][y1])
				return false;
		}
	}
	return true;
}
bool conbinacion() {
	int x, y, x1, y1;
	char aux[n][n];
	
	for ( x = 0, x1 = 0; x < n; x++, x1++) {
		for ( y = 0, y1 = n-1; y < n; y++, y1--) {
			aux[x][y] = matrix[x1][y1];
		}
	}
	/*REP(x,n) {
		REP(y,n) {
			cout << aux[x][y] << " ";
		}
		cout << endl;
	}
	cout << endl;*/
	//dbg(rotate90((char*)aux));
	//dbg(rotate270((char*)aux));
	if (rotate90((char*)aux) || rotate270((char*)aux))
		return true;
	else
		return false;
}
bool iguals() {
	int x, y;
	REP(x,n) {
		REP(y,n) {
			if (matrix[x][y] != matrix1[x][y])
				return false;
		}
	}
	return true;
}
int main () {
	freopen("transform.in" , "r" , stdin);
	freopen("transform.out" , "w" , stdout);
	int  i, j;
	cin >> n;
	REP(i,n) {
		REP(j,n) {
			cin >> matrix[i][j];
		}
	}
	REP(i,n) {
		REP(j,n) {
			cin >> matrix1[i][j];
		}
	}
	if (rotate90()) { cout <<"1" << endl;  goto loop; }
	if (rotate180()) { cout <<"2" << endl; goto loop; }
	if (rotate270()) { cout <<"3" << endl; goto loop; }
	if (reflexition()) { cout <<"4" << endl; goto loop; }
	if (conbinacion()) { cout <<"5" << endl; goto loop; }
	if (iguals()) { cout <<" 6" << endl;  goto loop; }
	
	cout << "7" << endl;
		
	loop:
	
	return 0;
}
