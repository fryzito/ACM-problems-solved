//problema del uva (11292 - Dragon of Loowater) ver que los caballeros puedan cortar las cabezas del dragon
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
	int a, b;
	cin >> a >> b ;
	while( a || b ){
		vector <int> v1,v2;
		int cont = 0, i, j = 0, k = 0, n;
			REP(i,0,a){
				cin >> n;
				v1.push_back(n);
			}
			REP(i,0,b){
				cin >> n;
				v2.push_back(n);
			}
			sort(ALL(v1));
			sort(ALL(v2));
			while (k < v1.size() && j < v2.size() ) {
				if( v1[k] <= v2[j] ){
					cont += v2[j];
					k++; j++;
				}
				else{
					j++;
				}
			}
			if( k == v1.size() )
				cout << cont << endl;
			else
				cout << "Loowater is doomed!" <<endl;
		
		cin >> a >> b ;
	}
	return 0;
}
