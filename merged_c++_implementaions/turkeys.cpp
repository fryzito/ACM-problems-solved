#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n,x,y,z,turkeys,numero,a,b,price = 0;
	bool vacio = false;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> turkeys;
		cin >> x >> y >> z;
		for(int j = 1; j < 10; j++){
			for(int k = 0; k < 10; k++){
				numero = j*10000;
				numero = numero + x*1000 + y*100 + z*10 + k;
				if((numero % turkeys) == 0){
					if(price < (numero / turkeys)){
						price = (numero / turkeys);
						a = j;
						b = k;
					}
					vacio = true;
				}
			}
		}
		if(!vacio)
			cout <<"0"<<endl;
		else
			cout << a << " " << b << " " << price << endl;
		vacio = false;
	}
}
