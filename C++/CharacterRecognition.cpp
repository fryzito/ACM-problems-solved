#include <cstdio>
#include <iostream>
#include <cmath>
#define dbg(x) cout << #x << " = " << x << endl
using namespace std;
int main () {
	int n;
	scanf("%d\n",&n);
	while(n--) {
		string str;
		int porcentage;  int contA = 0, contR = 0;
		while(getline(cin,str) && str.size()!=0) {
			for(int i=0; i<str.size(); i++) {
				if(str[i]!='#') contR++;
					contA++;
			}
		}
		if(contR*100 % contA == 0)
			printf("Efficiency ratio is %d%%.\n",(contR*100)/contA);
		else {
				int cab = contR*1000/contA;
				if(contR*1000 % contA >= (contA+1)/2) cab++;
				if(cab % 10 == 0) printf("Efficiency ratio is %d%%.\n",cab/10);
				else printf("Efficiency ratio is %d.%d%%.\n",cab/10,cab%10);
		}
	}
	return 0;
}
