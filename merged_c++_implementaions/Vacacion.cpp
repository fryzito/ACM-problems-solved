#include <cstdio>
#include <iostream>
#include <string>
#define MAXN 1001
using namespace std;
int LCS(string str1, string str2) {
	str1 = '#' + str1;
	str2 = '#' + str2;
	int C[str1.size()][str2.size()];
	
	for (int i = 0; i < str1.size(); i++) C[i][0] = 0;
	for (int i = 0; i < str2.size(); i++) C[0][i] = 0;
	
	for (int i = 1; i < str1.size(); i++)
		for (int j = 1; j < str2.size(); j++) {
			if (str1[i] == str2[j])
				C[i][j] = C[i-1][j-1] + 1;
			else 
				C[i][j] = max(C[i-1][j], C[i][j-1]);
		}
		
	return C[str1.size()-1][str2.size()-1];
}
int main() {
	char str1[MAXN], str2[MAXN];
	int cont = 0;
	while(gets(str1) && gets(str2) && str1[0] != '#') {
		cont++;
		cout << "Case #" << cont << ": you can visit at most " << LCS(str1,str2) << " cities." << endl;
	}
}
