#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int numero;
	int A = 1;
	cout<<"Ingrese el numero de algoritmos resueltos"<<endl;
	cin>>numero;
	if(numero != 0) {
		for(int K = 1; K < numero;K++)	{
			A *= 2;
		}
	}
	else	{
		A = 1;
	}
	 cout << A << endl;
}
