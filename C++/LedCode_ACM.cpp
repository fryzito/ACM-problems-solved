#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

string diccionario[] = {"123457","1234567","456","1580","12456","1249","12569","13457","37","3567","13459","156","12357","3457","123567","1458","12347","123459","12467","278","13567","1379","135790","90","1347","23456"};

char HaLtra(string patron,int k){
	if(patron[patron.size()-1] == '0') {
		if(patron == diccionario[3]){
			return 'D';
		}
		else{
			if(patron == diccionario[22]){
				return 'W';
			}
			else {
				if(patron == diccionario[23]){
					return 'X';
				}
				else{
					patron = patron.substr(0,patron.size()-1);
					return HaLtra(patron,0)+' '; // verificar si vota repta correcta
				}
			}
		}
	}
	else {
		if(patron == diccionario[k])
			return 'A'+k;
		else
			return HaLtra(patron,k+1);
	
	}
	
}
int main() {
	int numero;
	char ni = 0;
	string n;
	vector<string> Final;
	string rpta,vacio;
	string RptaAux;
	cin>>numero;
	for(int k =0; k<numero;k++) {	
		 getline(cin,n);
			int l = n;
			if((64 < l && l < 91)||(l == 32)) {
				rpta += n;
			}
			else {
				if(ni < n || n == '0') {
					RptaAux += n;
					if(n != '0') {
						ni = n;
					}
				}
				else {
					rpta +=HaLtra(RptaAux,0);
					RptaAux = n;
				}
			}
				cout<<"se guardo\n";
		Final.push_back(rpta);
		rpta=vacio;
	}
	for(int k=0;k<Final.size();k++)
	{
		cout<<Final[k]<<endl;
	}
	return 0;
}
