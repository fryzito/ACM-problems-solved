#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;
int ToInt(string x) {
	int resultado;
	istringstream ss(x);	
	ss >> resultado;
	return resultado;
}
string intToString(int x) { 
	stringstream ss; 
	ss << x; 
	return ss.str(); 
}
 string convertir(char A) {
	int numero;
	char aux;
	string cadena;
	numero = A;
	cadena = intToString(numero);	
	if(numero < 100) {
		aux = cadena[0];
		cadena[0] = cadena[1];
		cadena[1]= aux;
	}
	else {
		aux = cadena[0];
		cadena[0] = cadena[2];
		cadena[2]= aux;
	}
	return cadena;	
 }
 bool EsNumero(char A) {
	int numero = A;
	if(48<=numero && numero <=57)
		return true;
	else
		return false;
 }
 int main() {
	string palabra;
	string finalpalabra;
	while (cin >> palabra) {
		if(EsNumero(palabra[0])) {
			char aux1, carac;
			int numero;
			string substr;
			for(int p = 0; p < palabra.size();p = p+2) {
				substr = palabra.substr(p,2);
				aux1 = substr[p];
				substr[p] = substr[p+1];
				substr[p+1] = aux1;
				numero = ToInt(substr);
				if(numero>32) {
					carac = numero;
					finalpalabra = carac;
				}
				else {
					substr = palabra.substr(p,3);
					aux1 = substr[p];
					substr[p] = substr[p+2];
					substr[p+2] = aux1;
					numero = ToInt(substr);
					carac = numero;
					finalpalabra += carac;
				}
				
			}
		}
		else {
			for(int k = 0;k < palabra.size();k++){
				finalpalabra += convertir(palabra[k]); 
			}
		}		
		cout<<finalpalabra;	
	}
	
	return 0;
 }
