#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
string dic[8] = {"ABC","EDF","GHI","JKL","MNO","PRS","TUV","WXY"};
int main() {
	string str; int numero;
	cin >> str;
	for(int i = 0; i < str.size(); i++) {
		numero = str[i] - '2';
		cout << dic[numero] << endl;
	}	
	return 0;
}
