#include <cstdio>
#include <iostream>
#include <vector>
#define dbg(x)cout<<#x<<" = "<<x<<endl
using namespace std;
bool possible(vector<int> v, int j, int acum, int price) {
	if(acum>price) return false;
	if(j>=v.size()) {if(acum==price) return true;else return false;}
	return possible(v,j+1,acum+v[j],price)||possible(v,j+1,acum,price);
}

int main() {
	int b1,b2,b3,b4,price;
	vector<int>v(4);
	cin >> price>> b1 >> b2 >> b3 >> b4 ;
	while(price) {
		v[0]=b1;v[1]=b2;v[2]=b3;v[3]=b4;
		if(possible(v,0,0,price))
			cout << "POSSIBLE" << endl;
		else
			cout << "IMPOSSIBLE" << endl;
	cin >> price>> b1 >> b2 >> b3 >> b4 ;
	}
	return 0;
}