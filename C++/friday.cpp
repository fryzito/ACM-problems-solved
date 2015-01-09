/*
ID: wildr.11
LANG: C++
TASK: friday
*/
#include <cstdio>
#include <iostream>
using namespace std;

int esBisiesto(int anio) {

	return anio % 4 == 0 && (anio % 100 !=0 || anio % 400 == 0);
}

int diasMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int numerodiasmes(int mes,int anio) {

    if(mes == 1)    /* febrero */
        return diasMes[mes]+esBisiesto(anio);
    else
        return diasMes[mes];
}

int main() {

	freopen("friday.in" , "r" , stdin);
	freopen("friday.out" , "w" , stdout);	
	int anios,aux;
	cin >> anios;
	if(anios != 0) {
		int semana[7];
		for(int h = 0; h < 7;h++) {
			semana[h] = 0;
		}
		int k = 0;
		for(int p = 1900; p < 1900 + anios; p++) {
			for(int j = 0; j < 12; j++) {
				semana[k]++;
				k =(k + numerodiasmes(j,p)) % 7;
				
			}
		}
		for(int g = 0; g < 7;g++) {
			if(g)
				cout<<" ";
			cout <<semana[g];
		}
		cout<<"\n";
	}		
	return 0;
}
