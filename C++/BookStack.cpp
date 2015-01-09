#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;
int main () {
	int n;
	stack<int> pila;
	stack<int> pila2;
	cin >> n;
	while(n) {
		if (n == -1) {
			cout << pila.top() << endl;
			while(!pila2.empty()) {
				pila.push(pila2.top());
				pila2.pop();
			}
		}
		else {
			if (n > 0) {
				pila.push(n);
			}
			else {
				while(n < 0) {
					pila2.push(pila.top());
					pila.pop();
					n++;
				}
			}
		}
		cin >> n;
	}
	return 0;
}
