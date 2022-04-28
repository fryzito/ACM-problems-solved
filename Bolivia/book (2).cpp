#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<utility>
#include<cmath>
#include<queue>
#include<stack>
#define REPN(i,a,b) for (int i = a; i < b; i++)
#define REP(i,b) REPN(i,0,b)
#define pb push_back
using namespace std;
struct point { int x, y; } ;
typedef vector<point> VP;
char digits[100];
int N;
int main(){
	scanf("%d",&N);
	while(N--) {
		scanf("0.%[0-9]...",&digits);
		printf("the digits are 0.%s\n",digits);
	}
	return 0;
}
