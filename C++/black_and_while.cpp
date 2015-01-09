//problema del uva (11231 - Black and white)cuantos tableros de ajedres contiene
#include<cstdio>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
#define REP( i, a, b) for(int i = int(a); i < int(b); i++)
#define ALL(x) (x).begin(),(x).end()
#define dbg(x) cout << #x << " = " << x << "\n";
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >>c;
	while(a || b || c ){
		int x,y,rpta;
		x = a-8;  y = b-8;
		if(x>=0 && y>=0){
			rpta = (x+1)*(y+1);
			if(rpta % 2 == 0)
				cout << rpta/2 <<endl;
			else{
				if(c)
					cout << rpta/2 + 1 <<endl;
				else
					cout << rpta/2 <<endl;
			}
		}
		else{
			cout << "0" <<endl;
		}
		cin >> a >> b >>c;
	}
}
