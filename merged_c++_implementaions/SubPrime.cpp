#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int B, N, aux, ini, fin;
  cin >> B >> N;
  while (B || N) {
    vector <int> v; bool goal = true;
    for(int i=0; i< B; i++) {
      cin >> aux;
      v.push_back(aux);
    }
    for (int i=0; i<N; i++) {
      cin >> ini >> fin >> aux;
      v[--ini] -= aux;
      v[--fin] += aux;
    }
    for (int i=0; i<B; i++) {
      if(v[i] < 0) {
	goal = false;
	break;
      }
    }
    /*for(int i=0; i<B; i++) cout << v[i] <<" ";
      cout << endl;*/
    if(goal)
      printf("S\n");
    else
      printf("N\n");
    cin >> B >> N;
  }
  return 0;
}
