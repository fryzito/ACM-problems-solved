#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int x=29;
	int numero;
	//========================================
	cout << "ingrese numero" << endl;
	cin >> numero;
	for(int k=1; k<10;k++)
	{
		x+=numero*k;
		
		cout << x << endl;
		
	}
	return 0;
}
