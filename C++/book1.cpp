#include <iostream>
#include <string>
#include <bitset>
#include <cstdio>
#include <stack>
#include <queue>
using namespace std;
#define dbg(x) cout << #x << " = " << x << endl;

class mycomparison {
  bool reverse;
public:
  mycomparison(const bool& revparam=false) {
	reverse=revparam;}
	
  bool operator() (const int& lhs, const int&rhs) const {
    if (reverse) return (lhs<rhs);
    else return (lhs>rhs);
  }
};

vector <int>mezcla(vector<int> a , vector<int> b, int n) {
	vector<int> rpta(n,0);
	sort (a.begin(),a.end()); // Ordenamos el vector a para mezclar
	sort (b.begin(),b.end()); // Ordenamos el vector b para mezclar
	merge (a.begin(),a.end(),b.begin(),b.end(),rpta.begin()); // mezclamos los dos arreglos
	return  rpta;                    // devuelve un arreglo ordenado
}

int main() {
	int A[10] = {1,2,4,6,8,9,4,2,5,34};
	int B[10] = {1,2,4,11,8,20,4,2,5,34};
	vector<int> v(A,A+10);
	vector<int> v1(B,B+10);
	
	priority_queue< pair<int,vector<int> > >  cola;
	
	for(int i = 0; i < 10; i++) {
		cola.push(make_pair(-1*A[i],v));
	}
	vector<int > v2 = mezcla(v,v1,20);
	for (int i = 0; i < 20; i++) cout << v2[i] << " ";
	cout << endl;
	/*for(int i = 0; i < 10; i++) {
		cout << -1*cola.top().first << endl;
		vector<int> aux = cola.top().second;
		for(int j = 0; j < 10; j++) cout << aux[j] ;
		cout << endl;
		cola.pop();
	}*/
}
