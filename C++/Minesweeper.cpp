#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
char mat[101][101];
int a,b;
void pintar(int i,int j) {
  if(i>=0 && j>=0 && i<a && j<b)
    if(mat[i][j]!='*')
      mat[i][j]=mat[i][j]+1;
}
int main() {
  bool first = true;
  int cont = 1;

  cin >> a >> b;
  while(a||b) {
    if(!first) cout << endl;
    else first = false;
    for(int i=0; i<a; i++) {
      for(int j=0; j<b; j++) {
	cin >> mat[i][j];
	if(mat[i][j]=='.') mat[i][j]='0';
      }
    }

    for(int i=0; i<a; i++) {
      for(int j=0; j<b; j++) {
	if(mat[i][j]=='*') {
	  pintar(i-1,j-1);
	  pintar(i-1,j);
	  pintar(i-1,j+1);
	  pintar(i,j-1);
	  pintar(i,j+1);
	  pintar(i+1,j-1);
	  pintar(i+1,j);
	  pintar(i+1,j+1);
	}
      }
    }

    //mostrar matriz
    printf("Field #%d:\n",cont++);
    for(int i=0; i<a; i++) {
      for(int j=0; j<b; j++) {
	cout << mat[i][j];
      }
      cout << endl;
    }
    cin >> a >> b;
  }
}
