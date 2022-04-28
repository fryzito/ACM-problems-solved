#include <iostream> 
#include <cstdio>
#include <sstream> 
#include <string>
using namespace std;

string  intToString(int x) 
{ 
	stringstream ss; 
	ss << x; 
	return ss.str(); 
}	


//Convertir un string a entero  (se necesita la libreria sstream para usar istringstream ( #include <sstream>) )
int stringToInt(string cadena) 
{ 
	istringstream ss(cadena);  //inicializar ss
	int resultado; 
	ss >> resultado; 
	return resultado; 
}

int main()
{
	/*string letra;
	cout << "introdusca cadena" <<endl;
	cin >> letra;
	cout << "el numero"<<stringToInt(letra)<<endl;*/
	int numero;
	cout << "introdusca el numero: " <<endl;
	cin >> numero;
	cout << "la cadena es : "<< intToString(numero) <<endl;
	//return o;
}
