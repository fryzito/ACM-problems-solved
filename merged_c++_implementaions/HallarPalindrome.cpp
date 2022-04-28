#include <cstdio>
#include <iostream>
using namespace std;
void HallarPalin2(string a,int k,int &sub,int &imf){
	int s,i;
	s=k+2;
	i=k;
	int j=0;
	while(a[i-j] == a[s+j]){
		j++;
	}
	sub = i+j+1;
	imf = s-j-1;
}
void HallarPalin(string a,int k,int &sub,int &imf){
	int s,i;
	s=k+1;
	i=k;
	int j=0;
	while(a[i-j] == a[s+j]){
		j++;
	}
	sub = i+j;
	imf = s-j;
}
int main(){
	string cadena;
	cin>>cadena;
	int sup,imf;
	int tamanio= 0;
	int supx;
	int imfx;
	string rpta;
	for(int k = 0; k<cadena.size()-1;k++){
		if(cadena[k]==cadena[k+1]){
			HallarPalin(cadena,k,sup,imf);
			if(tamanio<(sup-imf)){
			supx = sup;
			imfx = imf;
			tamanio=(sup-imf);
		}
			}
		else if(cadena[k]==cadena[k+2]){
				HallarPalin2(cadena,k,sup,imf);	
				if(tamanio<(sup-imf)){
			//cout<<"ok";
			supx = sup;
			imfx = imf;
			tamanio=(sup-imf);
		}
				}
		
	}
	supx = supx-imfx;
	rpta = cadena.substr(imfx,supx+1);
	cout<<rpta;
	
}
