#include<cstdio>
#include<cmath>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
#define pb push_back
#define mp make_pair

#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a,b,sizeof(a))
#define REPN(x,a,b) for (int x=a; x<b;++x)
#define REP(x,b) REPN(x, 0, b)
#define dbg(x) cout << #x << " = " << x << endl;

int main() {
	int lowerBound, upperBound;
	cin >> lowerBound >> upperBound;
	int  res = 0, max = 0;
	REPN(i,lowerBound,upperBound+1) {
		int b = 0;
		int score = 0;
		while(i - b*b > 0) {
			int c = i - b*b;
			int r = (int) sqrt(c);
			if (r*r == c) score++;
			b++;
		}
		if (score >= max) res = i, max = score;
	}
	cout << res << endl;
}
