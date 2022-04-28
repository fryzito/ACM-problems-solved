//problema del uva (573 The Snail)del caracol que  sube 3 i baja 1 i se cansa 10% 
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
	double a, b, c, d, go;
	int cont;
	cin >> a >> b >> c >> d;
	while(a){
		cont = 1; double res = b*d/100;
		go = b;
		while(go >= 0 && go <= a){			
			go = go - c;
			if(go < 0)
				break;
			b = b-res;
			cont++;
			if(b>0)
				go = go + b;
			if(go > a)
				break;
		}
		if(go > 0)
			cout << "success on day "<<cont<<endl;
		else
			cout << "failure on day "<<cont<<endl;
		cin >> a >> b >> c >> d;
	}
}
