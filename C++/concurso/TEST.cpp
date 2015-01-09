#include <iostream>
#include <cstdio>
using namespace std;
 int main() {
	int p,q;
	int mayor = 0;
	int menor= 1000000000;
	for(int y = 0;y <10;y++) {
	cin >> p >> q;
	int Pers;
	cin >> Pers;
	int contador [q] ;
	int lista[Pers][2];
	for(int k = 0; k < Pers; k++ ) {
		int a,b;
		cin >> a >> b;
		lista [k][0] = a;
		lista [k][1] = b;
	}
	for (int s = p; s <= q; s++) {
		contador[s] = 0;
		for (int h = 0 ; h< Pers; h++) {
			if((lista[h][0]<=s) && (s <= lista[h][1]))
				contador[s]=contador[s]+1;
		}	
	}
	for(int i = p; i <=q ; i++) {
		if(mayor<=contador[i])
			mayor = contador[i];
			
		if(menor>=contador[i])
			menor = contador[i];
	}
	cout<<menor << " " <<mayor<<"\n";
	}
	return 0;
 }
