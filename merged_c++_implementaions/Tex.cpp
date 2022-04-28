//problema del uva TeX Quotes para cambiar el primer "" por `` y el segundo " por ''.
#include<cstdio>
#include<iostream>
#define bd(a) cout << #a << " = " << a << endl;
using namespace std;
int main(){
	string str;
	bool firts = true;
	while(getline(cin,str)){
		for(int i = 0; i < str.size(); i++){
			if(str[i] == '"'){
				if(firts){
					cout<<"``";
					firts = false;
				}
				else{
					cout <<"''";
					firts = true;
				}
			}
			else{
				cout<<str[i];
			}
		}
		cout<<"\n";
	}
}
