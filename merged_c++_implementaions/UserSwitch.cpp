#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int option;
	cin >> option;
	switch(option){
		case 1:
			cout << "The number is one";
			break;
		case 2:
			cout << "the number is two";
			break;
		case 3:
			cout << "the number is three";
			break;
		case 4:
			cout << "the number is four";
			break;
		default :
			cout << " The number isn't 1,2,3 or 4 ";
	}
}
