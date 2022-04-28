#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <utility>
using namespace std;
#define TRvii (c,it) for (vii::iterator it = (c).begin(); it != (c).end(); it++)

typedef pair <int,int> ii;
typedef vector <ii> vii;

queue<int> q; ii dist;
q.push(s); dist[s] = 0;
void BFS() {
  while (!q.empty()) {
    int u = q.front(); q.pop();
    printf("Visit %d, Layer %d\n", u, dist[u]);
    TRvii (AdjList[u],v)
      if (!dist.count(v->first)) {
	dist[v->first] = dist[u] + 1;
	q.push(v->first);
      }
  }
}
int main() {
  //codigo para husar el BFS
  return 0;
}
