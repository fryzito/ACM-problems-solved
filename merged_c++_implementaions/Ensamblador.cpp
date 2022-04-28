#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstdio>
#inclucd <conio.h>
using namespace std;
int suma(int a, int b){
		int resultado;
	--asm;
	{
		mov  eax,a
		add eax,b
		mov resultado,eax
	}
	return resultado;
}
int main() {
	int a,b;
	cin >> a;
	cin >> b;
	cout << 	suma(a,b) << endl;
}
