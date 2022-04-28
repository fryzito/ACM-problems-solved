#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg3(x,y,z) cout << #x << " = " << x << "  " << #y << " = " << y << "  " << #z << " = " << z << endl;
using namespace std;
int main(){
	int h;
	cin>>h;
	int matriz[h][h];
	int a[h];
	for(int i=0; i<h;i++){
		for(int j=0; j<h;j++){
			cin>>matriz[i][j];
		}
	}
	int mejor = 0;
	for( int i=0; i<h;i++){
		memset(a,0,sizeof(a));
		for( int j=i; j<h;j++){
			int suma = 0;
			for( int k=0; k<h;k++){
				a[k]+=matriz[j][k];
				if(suma>0)
					suma+=a[k];
				else
					suma=a[k];
				if (mejor < suma)
					mejor = suma;
			}
		}
	}
	cout<<mejor<<endl;
	
}
