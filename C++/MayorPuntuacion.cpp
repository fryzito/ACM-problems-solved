#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int num[5]={9,2,6,9,0};
	int aux;
	int contador = 0;
	for(int i=1; i <5; i++){
		if(num[i-1] > num[i]){
			aux = num[i];
			num[i] = num[i-1];
			num[i-1] = aux;
		}
	}
	for(int j = 0; j < 5; j++){
		if(num[4] == num[j])
		contador++;
	}
	cout <<contador*num[4]<<endl;
}
