#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void shellsort(int a[], int n) {
	int intervalo, i, j, k;
	intervalo = n/2;
	while (intervalo > 0) {
		for(i = intervalo; i < n; i++) {
			j = i - intervalo;
			while (j >= 0) {
				k = j + intervalo;
				if (a[j] <= a[k])
					j = -1;
				else {
					swap(a[j],a[k]);
					j -= intervalo;
				}
			}
		}
		intervalo = intervalo / 2;
	}
}
int main() {
	int n = 10;
	int a[] = {11,25,53,37,28,60,43,35,54,25};
	shellsort(a,n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}

