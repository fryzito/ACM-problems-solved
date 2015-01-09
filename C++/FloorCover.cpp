#include <cstdio>
#include <iostream>
using namespace std;
int mem[R+1][11][1<<10];
int f(int x, int y, int mask) {
  if(mem[x][y][mask] == -1) {
    int res = 0;
    if(x == R) {
      res = 0;
    } else if(y == C) {
      res = f(x+1,0,mask);
    } else {
      res = R*C;
      int g;
      int nmask;
      // Poner horizontal en (x,y);
      g = 0;
      if((y==0) || (board[x][y-1]=='x') || (mask>>(y-1)&1 ) ) {
	if(board[x][y]=='.') {
	  g =1;
	}
      }

      if (mask & (1<<y)) {
	nmask = mask - (1<<y);
      } else {
	nmask = mask;
      }
      g = g + f(x, y+1, nmask);
      // Cambiar el bit y de la mascara a 0
      g += f(x,y+1,nmask);
      // Poner vertical en (x, y);

    }

  }
  return mem[x][y][mask];
}

int solve() {
  memset(mem,-1,sizeof men);
  


  return f(0,0,   0);
}


int main() {
  int TC, casos = 0, a ,b;
  scanf("%d\n",&TC);
  while(TC--) {
    scanf("%d %d\n",&a,&b);
    char M[a][b]; int cont = 0;
    for(int i=0; i<a; i++) {
      for(int j=0; j<b; j++) {
	scanf("%c",&M[i][j]);
      }
      scanf("\n");
    }
    
    
    for(int i=0; i<a; i++) {
      for(int j=0; j<b; j++) {  
	cout << M[i][j]<<" ";
      }
      cout << endl;
    }
    printf("Case #%d: %d\n",++casos,cont);
  }
  return 0;
}
