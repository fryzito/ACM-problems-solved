// problemas aserca de fusilbes  Uva - 661 - Blowing Fuses ver i bolo el plomo.
#include<cstdio>
#include<iostream>
#include<sstream>
#include<algorithm>
#define REP(i, a, b) for(int i = int(a); i < int(b); i++)
#define dbg(x) cout << #x << " = " << x << "\n";
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
using namespace std;
int main(){
	int a, b, c, sec = 1;
	bool xit = true;
	cin >> a >> b >> c;
	while ( a || b || c ) {
		int i, k, cont = 0, cont1 = 0, ar[a];
		bool boln[a];
		REP(i,0,a){
			cin >> ar[i];
			boln[i] = true;
		}
		REP(i,0,b){
			cin >> k;
			if(boln[k-1]){
				cont += ar[k-1];
				cont1 = max(cont1, cont);
				boln[k-1] = false;
			}
			else{
				cont -= ar[k-1];
				boln[k-1] = true;
			}
			if(cont > c) xit = false;
		}
		if(xit){
			cout << "Sequence " << sec << endl;
			cout << "Fuse was not blown.\n";
			cout << "Maximal power consumption was " << cont1 << " amperes.\n\n";
		}
		else{
			cout << "Sequence " << sec << endl;
			cout << "Fuse was blown.\n\n";
		}
		sec++;
		xit = true;
		cin >> a >> b >> c;
	}
	return 0;
}
