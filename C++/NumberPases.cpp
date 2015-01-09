#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,x,y;
	int rpta;
	cin>>n;
	for(int k = 0 ; k < n;k++){
		cin >> x >>y;
		if((x ==y) || (x == y+2)){
			if(x%2==0)
				cout<<x+y<<"\n";
			else
				cout<<(x+y)-1<<"\n";
		}
		else
		cout<<"No hay número de";
	}
}
