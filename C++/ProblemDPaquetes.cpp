#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int c,a,b,contador;
	int count[100];
	cin >> c;
	for(int i =0; i < c; i++){
		cin >> a;
		for(int j = 0; j < a; j++){
			cin >> b;
			contador += b;
		}
		if(contador % 2 ==0)
			cout<<"0"<<endl;
		else
			cout<<"1"<<endl;
	}
}
