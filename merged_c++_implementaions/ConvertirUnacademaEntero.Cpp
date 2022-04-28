#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <sstream>
using namespace std;
string intToString(int x) { 
	stringstream ss; 
	ss << x; 
	return ss.str(); 
}
//Convertir un string a entero  (se necesita la libreria sstream para usar istringstream ( #include <sstream>) )
int stringToInt(string cadena) { 
	istringstream ss(cadena);  //inicializar ss
	int resultado; 
	ss >> resultado; 
	return resultado; 
}

int conver(string n){
	int numero;
	numero = atoi("1");
		return numero;
}
  // otra forna de convetir cadena a enteros utilizando atoi
  /*int i;
  char numero [256];s
  printf ("Enter a number: ");
  fgets ( numero, 256, stdin );
  i = atoi (numero);
  printf ("El numero entero es %d. El doble del numero es %d.\n",i,i*2);
  int h = atoi("123");
  cout<< h;
   */

 int main()
 {
	string nombre;
	int numero;
	int numero1;
	cout<<"ingrese string : ";
	cin>>nombre;
	cout<<"ingrese numero : ";
	cin>>numero;
	numero1 = atoi("87");
	
	cout<<stringToInt(nombre);
	cout<<intToString(numero);
	cout<<numero1;
 }
