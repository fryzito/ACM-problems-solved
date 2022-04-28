#include <cstdio>
#include <iostream>
#define MAXN 100005
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int P[MAXN];

void init(int n) {fill(P,P+n,-1);}
int find(int i) {return (P[i] == -1 ? i:P[i] = find(P[i]));}
void join(int i, int j) {if(find(i)!= find(j)) P[find(i)] = find(j);}
void move(int i, int j) {if(find(i)!=find(j)){ P[i] = -1; join(i,j);}}

int main() {
  int n, N, a, b, c;
  cin >>  n >> N;
  init(n);
  for(int i = 0 ; i < N; i++) {
    cin >> a;
    switch(a) {
    case 1:
      cin >> b >> c;
      join(b,c);
      break;
    case 2:
      cin >> b >> c;
      move(b,c);
      break;
    case 3:
      cin >> b;
      cout << find(b) << endl;
      break;
    default:
      break;
    }
  }
  return 0;
}

