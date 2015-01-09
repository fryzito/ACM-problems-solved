#include<stdio.h>
#include<iostream>
#include<sstream>
using namespace std;
	int vn[7]={ 1000, 500, 100,50,10,5,1};
	char vc[7]={'M','D','C','L','X','V','I'};
	int Vn[13]={ 1000, 900, 500, 400,100, 90, 50, 40,10, 9, 5, 4, 1 };
	char *Vc[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
int valor(char x){
	for(int k = 0; k < 7; k++){
		if(x == vc[k])
			return vn[k];
	}
}
bool esnumero(string str){
	return (48 <= str[0]) && (str[0] <=57);
}
int ToInt(string str){
	int n;
	istringstream ss(str);
	ss >> n;
	return n;
}
int main(){
	int i,x,numero = 0;
	string x1;
	while( cin >> x1 ){
		if(esnumero(x1)){
			x = ToInt(x1);
			i = 0;
			while( x>0 ){
				if( x>=Vn[i] ){
					printf( "%s", Vc[i] );
					x = x - Vn[i];
				}
				else
					i++;
			}
			printf( "\n" );
		}
		else{
			if(x1.size()==1)
					numero = valor(x1[0]);
			else{
				for(int j = 1; j < x1.size(); j++){
					if(valor(x1[j-1]) >= valor( x1[j])){
						numero = numero + valor(x1[j-1]);
						if(j==x1.size()-1) numero = numero +valor(x1[x1.size()-1]);
					}
					else{
						numero = numero + (valor(x1[j])-valor(x1[j-1]));
						j++;
						if(j==x1.size()-1) numero = numero +valor(x1[x1.size()-1]);
					}
				}
			}
			cout << numero <<endl;
			numero = 0;
		}
	}
	return 0;
}
