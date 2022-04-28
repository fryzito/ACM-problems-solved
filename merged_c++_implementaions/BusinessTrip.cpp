#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int k, a[12], sum = 0, cont = 0;
	cin >> k;
	for(int i = 0; i < 12; i++) {
		cin >> a[i];
	}
	sort(a,a+12);
	if(k == 0) goto loop;
	for ( int i = 11; i >= 0; i--) {
		sum += a[i];
		if(sum >= k){
			cont++;
			break;
		}
		else
			cont++;
	}

	if(k > sum)
		cont = -1;
	loop:		
	cout << cont << endl;
	return 0;
}

