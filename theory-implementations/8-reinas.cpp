#include <cstdio>
#include <iostream>
#include <set>
#include <algorithm>
#include <cstring>
#define pb push_back
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int tablero[9],row[9], cont = 0;
set<int> Acol;
set<int> Adgl45;
set<int> Adgl135;
set<int>::iterator it;

bool place(int col, int tryrow) {
	for (int prev = 1; prev < col; prev++)
		if(row[prev] == tryrow || (abs(row[prev] - tryrow) == abs(prev - col)))
			return false;
	return true;
}

void back(int col) {
	for(int tryrow = 1; tryrow <= 8; tryrow++)
		if(place(col,tryrow)) {
			row[col] = tryrow;
			if(col == 8) {
				for(int i = 1; i <= 8; i++) cout << row[i] << " ";
				cout << endl;
				cont++;
				return;
			}
			else back(col+1);
		}
}

void backtrack(int k,int col,int dgl45,int dgl135) {
	Acol.insert(col); Adgl45.insert(dgl45); Adgl135.insert(dgl135);
	if(k == 8){
		for(int i = 0; i < 8; i++) cout << tablero[i] << " ";
		cout << endl;
		cont++;
		return;
	}
	else {
		for(int j = 0; j < 8; j++) {
			if((Acol.find(j)==Acol.end()) && (Adgl45.end()==Adgl45.find(j-k)) && (Adgl135.end()==Adgl135.find(j+k))) {
				tablero[k] = j;
				backtrack(k+1,j,j-k,j+k);
				Acol.erase(j); Adgl45.erase(j-k); Adgl135.erase(j+k);
			}
		}
	}
}

int main() {
	memset(row,0,sizeof row);
	backtrack(0,9,9,9);
	//back(1);
	cout << cont << endl;
	return 0;
}

