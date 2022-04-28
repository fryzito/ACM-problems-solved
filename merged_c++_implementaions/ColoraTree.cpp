#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <cstring>
#define pb push_back
#define MAXN 1001
#define dbg(x) cout << #x << "=" << x << endl
#define dbg2(x,y) cout << #x << "=" << x << " " << #y << "=" << y << endl
using namespace std;
map <int,vector<int> > Grafo;
map <int,bool> marca;
int Ci[MAXN];
int DFS(int R,int &contador) {
  marca[R] = true; int costo=0;
  for(int i=0; i<Grafo[R].size(); i++) {
    if(!marca[Grafo[R][i]]) {
      costo += contador*Ci[Grafo[R][i]-1];
      marca[Grafo[R][i]] = true;
      contador++;
      costo += DFS(Grafo[R][i],contador);
    }
  }
  return costo;
}
int BFS(int R) {
  queue<int> cola;  int costo = 0,contador = 1;
  cola.push(R);
  marca[R] = true;
  costo = Ci[R-1]; contador++;
  while(!cola.empty()) {
    int nodo = cola.front(); cola.pop();
    for(int i=0; i<Grafo[nodo].size(); i++) {
      if(!marca[Grafo[nodo][i]]) {
	marca[Grafo[nodo][i]] = true;
	costo += contador*Ci[Grafo[nodo][i]-1];
	contador++;
	cola.push(Grafo[nodo][i]);
      }
    }
  }
  return costo;
}

int main() {
  int N, R, ini, fin;
  scanf("%d %d",&N,&R);
  while(N || R) {
    for(int i=0; i<N; i++)
      scanf("%d",Ci+i);
    for(int i=0; i<N-1; i++) {
      scanf("%d %d",&ini,&fin);
      Grafo[ini].pb(fin);
      marca[ini] = false;
    }
    int valorinicial = 2;
    int a = DFS(R,valorinicial);
    a += Ci[R-1];
    for(int i=1; i<=N; i++)
      marca[i] = false;
    int b = BFS(R);
    printf("%d\n",min(a,b));
    Grafo.clear();
    marca.clear();
    scanf("%d %d",&N,&R);
  }
  
  return 0;
}
