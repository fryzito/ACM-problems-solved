#include <cstdio>
#include <stdlib.h>
#include <sstream>
#include <iostream>
using namespace std;
 bool  palindrome(string numero){
	int indizador=numero.length();
	int count=0;
	for(int i=0;i<numero.length()/2;i++){
		indizador=indizador-1;
		if(numero[i]!=numero[indizador]){
			//count=count+1;
			return 0;
		}
	}
	return 1;
 }
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

 bool validarpalindrome(string n){
	if(palindrome(n)>0)
	return true;
	else
	return false;
 }
 string nextpalindrome(string convert){
	while(palindrome(convert)!=1);
	//for(int i=0;i<=100;i++)
	{	
		int aux=stringToInt(convert)+1;
		string convert=intToString(aux);
		//if(palindrome(convert))
		
	}
	
	return convert;
 }
int main(){
	string numero;
	cout<<"introdusca el numero: ";
	cin>>numero;
	//cout<<validarpalindrome(numero);
	/*int nume=stringToInt(numero)+1;
	string convert=intToString(nume);*/
	
	cout<<nextpalindrome(numero); 
	
	//cout<< palindrome(convert);
}
