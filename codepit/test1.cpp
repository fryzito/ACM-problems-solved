#include <cstdio>
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int stringToInt(string cadena) { 
	istringstream ss(cadena);  //inicializar ss
	int resultado; 
	ss >> resultado; 
	return resultado; 
}
int main() {
	int numero;
	char ntex[2];
	bool terminar = false;
	vector <int> lis;
	while(scanf("%d",numero) != EOF){
		if((numero != 42) && (terminar == false)){
			lis.push_back(numero);
		}
		else
			terminar = true;
	}
	for(int k = 0; k < lis.size();k++) {
			cout<<lis[k]<<"\n";
		}
}
