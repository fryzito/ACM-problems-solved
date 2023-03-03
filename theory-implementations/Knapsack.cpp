#include <cstdio>
#include <iostream>
#include <algorithm>
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y) cout << #x << " = " << x << " " << #y << " = " << y << endl;
using namespace std;
int w[100], v[100];
int id, remw;
int value[1000][1000];
void HallarObjetos(int i, int j) {
  if (j <= 0 || i <= 0) return;
  if(value[i][j] == value[i-1][j]) {
    HallarObjetos(i-1,j);
  }
  else {
    cout << w[i] << "      " << v[i] << endl;
    HallarObjetos(i-1,j-w[i]);
  }
}
int main() {
  int id, remw;
  cin >> id;
  w[id+1], v[id+1];
  for(int i = 1; i <= id; i++) {
    cin >> w[i] >> v[i];
  }
  cin >> remw;
  value[id+1][remw+1];
  
  for (int i = 0; i <= id; i++) value[i][0] = 0;
  for (int i = 0; i <= remw; i++) value[0][i] = 0;
  
  for(int i = 1; i <= id; i++) {
    for (int j = 1; j <= remw; j++) {
      if (w[i] > j )
        value[i][j] = value[i-1][j];
      else {
        value[i][j] = max(value[i-1][j],v[i]+ value[i-1][j-w[i]]);
      }
    }
  }
  cout << "Max Valor " << endl;
  cout << value[id][remw] << endl;
  
  cout << "Peso  Valor " << endl;
  HallarObjetos(id,remw);
}
