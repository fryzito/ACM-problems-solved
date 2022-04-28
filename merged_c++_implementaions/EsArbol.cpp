 #include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a,b,sizeof(a))
#define REPN(x,a,b) for (int x=a; x<b;++x)
#define REP(x,b) REPN(x, 0, b)
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y) cout << #x << " = " << x << "  " << #y << " = " << y << endl;
#define MAXN 21
 bool esArbol(vector<vector<int> > &lista, int t, vector<bool> &toc, int padre){
	 toc[t] = true;
	 for(int i=0;i<lista[t].size();i++){
		 if((toc[lista[t][i]]==true&&lista[t][i]!=padre))
			return false;
		 if(toc[lista[t][i]]==false)
		 if(esArbol(lista,lista[t][i],toc,t)==false)
			return false;
	 }
	 return true;
}
int main() {
	int nodos, i;
	vector<vector <int> > Arbl;
	cin >> nodos;
	REP(i,nodos) {vector<int> v ; Arbl.pb(v);}
	vector<bool> toc(nodos,0);
	int a, b, j, m;
	while(cin >> b) {
		cin >> m;
		REP(j,m) {
			cin >> a;
			Arbl[b].pb(a);
		}
	}
	cout << "Lista de Adj es: " << endl;
	int p,q;
	REP(q,toc.size()) cout << toc[q] << " ";
	cout << endl;
	REP(p,nodos) {
		REP(q,Arbl[p].size()) {
			cout << Arbl[p][q] << " ";
		}
		cout << endl;
	}
	
	cout << esArbol(Arbl, 1, toc, 0) << endl;
}
