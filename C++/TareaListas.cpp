#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <list>
using namespace std;
#define dbg(x) cout << #x << " = " << x << endl;

vector <int>mezcla(vector<int> a , vector<int> b) {
	list<int> lis1(a.begin(),a.end());
	list<int> lis2(b.begin(),b.end());
	lis1.sort();
	lis2.sort();
	lis1.merge(lis2);
	vector<int> rpta(lis1.begin(),lis1.end());
	return rpta;
}
int main() {

	int NroSubListas,NroElementos, elemento;
	cin >> NroSubListas;
	
/* vector de pares en el que almacena NroElementos y SubListas*/
	
	priority_queue< pair<int , vector<int > > > cola;
	
	/* ingresando datos desde consola*/
	for(int i = 0; i < NroSubListas; i++) {
		cin >> NroElementos;
		vector<int> VectorAuxiliar;
		for(int j = 0; j < NroElementos; j++) {
			cin >> elemento;
			VectorAuxiliar.push_back(elemento);
		}
		cola.push(make_pair(-1*NroElementos,VectorAuxiliar));
	}
	
/* Para la mezcla de sub lista utilizaremos cola de prioridad asi escojeremos las listas de menor elemento*/
	while(!cola.empty()) {
		
		vector<int> VecAux = cola.top().second;
		int NumElemVecAux = cola.top().first;
		cola.pop();
		
		if (cola.empty()) break; // conprobando que la cola no este basia
		
		vector<int> VecAux1 = cola.top().second;
		int NumElemVecAux1 = cola.top().first;
		cola.pop();
		
		int NumResultado = NumElemVecAux+NumElemVecAux1;
		vector<int> Resultado = mezcla(VecAux,VecAux1);
		
		for(int i = 0; i < Resultado.size(); i++) cout << Resultado[i] <<" ";
		cout << endl;
		cola.push(make_pair(-1*NumResultado,Resultado));
	}
	return 0;
}
