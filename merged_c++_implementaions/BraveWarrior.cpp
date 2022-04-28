#include <iostream>
#include <cstdio>
#include<algorithm>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
	long long int a,b;
	long long int rpta;
	while(cin>>a,cin>>b){
		rpta = abs(a - b);
		cout << rpta << endl;
	}
	return 0;
}
