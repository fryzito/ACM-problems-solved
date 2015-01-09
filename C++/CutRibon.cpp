#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#define dbg(x) cout << #x << " = " << x << endl
using namespace std;
int n, cont = 0, rpta = 0;
bool goal = false;
vector<int> v(3,3);
void go(int acumulador, int cont) {
  if(goal) return;
  for(int i = 0; i<3; i++) {
    if(acumulador > n) return;
    if(acumulador == n) {rpta=cont;goal = true;return;}
    go(acumulador+v[i], cont+1);
    if(goal) break;
  }
}
int main() {
  cin >> n ;
  int acumulador = 0;
  for(int i=0; i< 3; i++) {
    cin >> v[i];
  }

  sort(v.begin(),v.end());

  go(acumulador,cont);
  printf("%d\n",rpta);
  return 0;
}
