#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <cstdio>
#include <cstring>
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y) cout << #x << " = " << x << " "<< #y << " = " << y << endl
using namespace std;

// BIT 1D
int n;
int t[1000000], value[1000000];

int sum(int x) {
  int result = 0;
  for(int i = x; i >= 0; i = (i & (i+1)) - 1)
    result += t[i];
  return result;
}

void inc(int x, int delta) {
  for(int i = x; i < n; i = (i | (i+1)))
    t[i] += delta;
}

// BIT 2D
/*
int n, m;
int t[1024][1024], value[1024][1024];

int sum(int x, int y)
{
	int result = 0;
	for(int i = x; i >= 0; i = (i & (i+1)) - 1)
        for(int j = y; j >= 0; j = (j & (j+1)) - 1)
            result += t[i][j];
    return result;
}

void inc(int x, int y, int delta)
{
	for(int i = x; i < n; i = (i | (i+1)))
        for(int j = y; j < m; j = (j | (j+1)))
            t[i][j] += delta;
}
*/

int main() {
  memset(t,0,sizeof t);
  n = 20;
  for(int i=0;i<n; i++)
    printf("%d ",sum(i));
  cout << endl;
  return 0;
}
