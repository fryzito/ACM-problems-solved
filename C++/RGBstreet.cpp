#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#define INF (1<<30)
using namespace std;
int cost[3][3];
int solve(int pos,int cur) { //pos es el nivel y cur indice indica el indice que se tomo
	if(pos==3) return 0;
	int res = INF;
	for(int i=0;i<3;i++) {
		if(cur==i) continue;
		res = min(res,solve(pos+1,i)+cost[pos][i]);
	}
	return res;
}
int main() {
	string str[3] = {"26 40 83","49 60 57","13 89 99"};
	for(int i = 0; i < 3;i++) {
		istringstream ss(str[i]);
		for(int j = 0; j < 3; j++) ss >> cost[i][j];
	}
	printf("%d\n",solve(0,-1));
	return 0;
}
