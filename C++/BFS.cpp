#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> BFS(vector<vector<int> > &lista, int nodoInicial) {
  int n = lista.size(),t;
  queue<int> cola;
  vector<int> distancias(n,n);
  cola.push(nodoInicial);
  distancias[nodoInicial] = 0;
  while(!cola.empty()){
    t = cola.front();
    cola.pop();
    for(int i=0;i<lista[t].size();i++){
      if(distancias[lista[t][i]] == n){
	distancias[lista[t][i]] = distancias[t]+1;
	cola.push(lista[t][i]);
      }
    }
  }
  return distancias;
}

int main(){
  int i, j, aux;
  vector <int> v2;
  vector <vector<int> > v;
  cin >> i;
  for (int k = 0; k < i; k++) {
    cin >> j;
    vector <int> v1;
    for (int n = 0; n < j; n++) {
      cin >> aux;
      v1.push_back(aux);
    }
    v.push_back(v1);
  }
  
  // mostrar vector
  for (int i=0; i<v.size();i++) {
    for(int j=0; j<v[i].size();j++) {
      cout << " " << v[i][j];
    }
    cout <<"\n";
  }
  
  v2 = BFS(v,2);
  
  for (int d = 0; d < v2.size(); d++) {
    cout << v2[d] << endl;
  }
  
}
