#include <cstdio>
#include <map>
#include <vector>
#include <iostream>
#define dbg(x) cout << #x << " = " << x << endl
using namespace std;
map<int, vector<int> > Grafo;
map<int,bool> visitado;

vector <int> list;

void TopoVisitar(int n) {
  visitado[n] = true;
  for(int i=0; i<Grafo[n].size(); i++) {
    if(!visitado[Grafo[n][i]]) {
      TopoVisitar(Grafo[n][i]);
    }
  }
  list.push_back(n);
}

void TopoSort(int n) {
  for(map<int,vector<int> >::iterator it=Grafo.begin(); it!=Grafo.end(); it++) {
      visitado[(*it).first] = false;
    }	
  for(int i=n; i>=1;i--) {
    if(!visitado[i]) {
      TopoVisitar(i);
    }
  }	
  return;
}
int main() {
  int n, m, a, b;
  scanf("%d %d\n",&n,&m);
  while(n || m) {

    Grafo.clear();

    for(int i=1; i<=n; i++) {
      Grafo[i];
    }

    for(int i=0; i<m; i++) {
      scanf("%d %d\n",&a,&b);
      Grafo[b].push_back(a);
    }

    list.clear();
    TopoSort(n);

    for(int i=0; i< list.size(); i++) {
      if(!i) printf("%d",list[i]);
      else printf(" %d",list[i]);
    }
    printf("\n");
    scanf("%d %d\n",&n,&m);
  }
  return 0;
}
