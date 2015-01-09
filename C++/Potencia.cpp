#include<iostream>
using namespace std;
int count_bits(unsigned long long x){
    int ret = 0;
    
    while(x != 0){
        if(x & 1) ++ret;
        x >>= 1;
    }
    
    return ret;
}
int main() {
	int n, b;
	cin >> n >> b;
	int r = 1;
	while (b) {
		if (b & 1) r *= n;
		n *= n;
		b >>= 1;
	}
	cout << r << endl;
}
