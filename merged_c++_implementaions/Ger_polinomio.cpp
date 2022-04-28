#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	//===========================variables==
	int grado;
	int valor=0;	
	int mayor=-9999;
	int menor=9999;
	int maximo;
	int minimo;
	int ma;
	int mi;
	int exponente;
	int v=1;		
	//==================leendo variables===============================
	cout << "Ingrese grado del polinomio " << endl;
	cin >>grado;
	exponente=grado;
	int polinomio[grado];
	for(int m=0;m<=grado;m++)
	{		
		cout << "ingrese el coeficiente de la variable X^" << exponente <<endl;
		cin >> polinomio[m];
		exponente--;
	}
	cout <<"Ingrese el limite superior " << endl;
	cin >> maximo;
	cout <<"Ingrese el limite inferior " << endl;
	cin >> minimo;
	
	//======================= Hallando los valores del polinomio al remplazar X ======================
	for(int x=minimo;x<=maximo;x++)
	{
		for(int m=0; m<=grado;m++)
		{
			if(m!=grado)
			{
				for(int c=1;c<=grado-m;c++)
				{
					v=v*x;			
				}
			
				valor+=polinomio[m]*v;
				v=1;				
			}
			else
			{
				valor+=polinomio[m];				
			}			
			
		}
		
		if(mayor<valor)
		{
			mayor=valor;
			ma=x;
		}
		if(menor>valor)
		{
			menor=valor;
			mi=x;
		}
		
		cout<< x <<" " << valor <<endl;	
		valor=0;						
	}
	cout<<""<<endl;
	cout<<  mayor <<" " << ma << " " << menor << " " << mi <<endl;
	
	return 0;	
}
