#include <cstdio>
#include <map>
#include <utility>
#include <vector>
#define mp make_pair
#define pb push_back
using namespace std;
int A[10][10];
int n;
bool goal = false;
bool place(int colum, int fila, int number,map<pair<int,int>, vector<int> > mapa) {
  for(int i=0; i<n*n; i++) {
    if(number == A[colum][i]) return false;
    if(number == A[i][fila]) return false;
  }
  //for(int i=0; i<mapa[mp(colum/n,fila/n)].size(); i++) {
  // if(number == mapa[mp(colum/n,fila/n)][i]) return false;
    //}
  //mapa[mp(colum/n,fila/n)].pb(number);
  return true;
}
void backtraking (int Colum,int fila, map<pair<int,int>, vector<int> > mapa) {
  if(goal) return;
  if(Colum==n*n) {
    for(int i=0; i<n*n; i++) {
      for(int j=0; j<n*n; j++) {
	printf("%d ",A[i][j]);
      }
      printf("\n");
    }
    goal=true; return;
  }
  if(fila == n*n) backtraking(Colum+1,0,mapa);
  if(A[Colum][fila] == 0) {
    for(int number=1; number<=9; number++) {
      if(place(Colum,fila,number,mapa)) {
	A[Colum][fila] = number;
	backtraking(Colum,fila+1,mapa);
      }
    } 
  }
}

int main() {
  int size;
  while(scanf("%d\n",&n)==1) {

    size = n*n;
    goal = false;
    map<pair<int,int>,vector<int> > mapa;
    for(int i=0; i<size ; i++) {
      for(int j=0; j<size; j++) {
	scanf("%d",&A[i][j]);	
	mapa[mp(i/n,j/n)].pb(A[i][j]);
      }
    }

    backtraking(0,0,mapa);
    //if(goal) {
      for(int i=0; i<size ; i++) {
	for(int j=0; j<size; j++) { 
	  printf("%d ",A[i][j]);
	}
	printf("\n");
      }
	// } else {
	//   printf("NO SOLUTION\n");
	// }
    
  }
  return 0;
}
