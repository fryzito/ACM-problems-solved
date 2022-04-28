#include <cstdio>
#include <iostream>

using namespace std;
 main()
 {
	int Suma = 1;
	int numero;
	int contador = 1;
	cout <<"Ingrese el numero a analizar "<<endl;
	cin >> numero;
	for(int K = 2; K < numero;K++)
	{	
		
		if((numero%K)==0)
		{	
			Suma = Suma +K;
		}
	}
	if(numero == Suma)
	{
		cout << "Si es perfecto " << endl;
	}	
	else
	{
		cout << "no es perfecto " << endl;
	}
}
