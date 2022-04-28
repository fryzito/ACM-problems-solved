#include<iostream>
#include<cstdio>
#include<stdio.h>
#include<math.h>
#include<vector>
#include <stack>
using namespace std;
int main(){
	double n;
	stack <double> p;
	while(cin >> n){	
		p.push(sqrt( n ));
	}
	while ( !p.empty() ) {
		cout << p.top() <<endl;
		p.pop();
	}
}
