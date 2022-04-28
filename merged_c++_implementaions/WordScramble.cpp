//problema del Uva cambiar parabras de una frace tu por ut o dime por emid
#include<cstdio>
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
	string cadena;
	bool first;
	stringstream ss;
while(getline(cin, cadena)){
		ss.clear();
		first = true;
		ss << cadena;
		while(ss >> cadena){
			reverse(cadena.begin(), cadena.end());
			if(first) {
				cout << cadena;
				first = false;
			}
			else
				cout << " "<< cadena;
		}
		cout << endl;
	}
}