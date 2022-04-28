#include <cstdio>
#include <iostream>
#include <set>
#include <algorithm>
#include <cstring>
using namespace std;
int row[9];

bool place(int col, int tryrow) {
  for (int prev = 1; prev < col; prev++)
    if(row[prev] == tryrow || (abs(row[prev] - tryrow) == abs(prev - col)))
      return false;
  return true;
}

void back(int col) {
  for(int tryrow = 1; tryrow <= 8; tryrow++)
    if(place(col,tryrow)) { // Heuristica
      row[col] = tryrow;
      if(col == 8) {
	for(int i = 1; i <= 8; i++) cout << row[i] << " ";
	cout << endl;
	return;
      }
      else back(col+1);
    }
}

int main() {
  back(1); // Llamada al Backtraking
  return 0;
}
