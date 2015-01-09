// problema del tuenti para sumar elementos de costado
#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <sstream>
using namespace std;
int main() {

	int cont = 0;
	string num;
	int nro;
	while(getline(cin,num)){
		stringstream ss(num);
		while(ss >> nro){
			cont += nro;
		}
		cout<<cont<<endl;
		cont = 0;
	}
}
