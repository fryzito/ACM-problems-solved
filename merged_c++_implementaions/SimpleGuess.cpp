#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <queue>
#include <stac>

using namespace std;
#define pb push_back
#define mp make_pair

#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a,b,sizeof(a))
#define REPN(x,a,b) for (int x=a; x<b;++x)
#define REP(x,b) REPN(x, 0, b)
#define dbg(x) cout << #x << " = " << x << endl;

class SimpleGuess {

  public:
bool	existe(vector<int> v, int principio, int fin, int x) {
		bool res;
		if(principio < fin) {
			int m = (principio + fin ) / 2;
			if (x < v[m]) res = existe(v,principio,m,x);
			else if(x > v[m]) res = existe(v,m+1,fin,x);
			else res = true;
		} else res = false;
		return res;
	}
  
  int getMaximum(int[] hints) {
	int i,j;
	vector<int> v (hints, hints + sizeof(hints) / sizeof(int) );
	vector <int> rpta;
	sort (ALL(v));
	REP(i,v[v.size()-1]) {
		REP(j,v[v.size()-1]) {
			if (existe(i + j) && existe(abs(i-j)))
				rpta.pb(i*j);
		}
	}
	sort (ALL(rpta));
	return rpta[rpta.size()-1];
  }
};
