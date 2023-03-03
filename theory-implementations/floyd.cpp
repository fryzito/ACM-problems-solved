#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#define INF 99
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int n;
int Recorrido[99][99];


void printM(vector<vector<int> > &matriz){
	for ( int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

void floyd(vector<vector<int> > &matriz) {
	for(int k = 0; k < n; k++){
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++){
			  // Para el recorrido
				if((matriz[i][k] + matriz[k][j])< matriz[i][j]) {
					Recorrido[i][j] = k;
				}
				matriz[i][j] = std::min(matriz[i][j],matriz[i][k] + matriz[k][j]);
			}
		cout<<"para k = " << k << endl;
		printM(matriz);
		cout << endl;
	}
		
	
}
int main() {
	int ini, to, w;
	cin >> n;
	vector<int> a(n,INF);
	vector<vector <int> > matriz(n,a);
	
	while (cin >> ini,cin >> to,cin >> w) {
		matriz[ini][to] = w;
	}
	
	for ( int i = 0; i < n; i++) {matriz[i][i] = 0; Recorrido[i][i] = 0; }// llenar ceros diagonal( obsional)

	//Escribir matris adjacente
	cout << "La matriz de costos inicial :" << endl;
	for ( int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matriz[i][j] << " ";
			Recorrido[i][j] = j;
		}
		cout << endl;
	}
	cout << endl;
	
	// //Escribir matris de rutas minimas
	// cout << "La matriz de rutas inicial :" << endl;
	// for ( int i = 1; i < n; i++) {
	// 	for (int j = 1; j < n; j++) {
	// 		cout << Recorrido[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	
	// cout << endl;
	
	floyd(matriz); // Llama al algoritmo de floyd-Warshall
	
	// //Escribir matriz Recorridos
	// cout << "La matriz de recorridos final seria " << endl;
	// for ( int i = 1; i < n; i++) {
	// 	for (int j = 1; j < n; j++) {
	// 		cout << Recorrido[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }	
	// cout << endl;
	
	//Escribir matriz final
	cout << "La matriz de costos final seria " << endl;
	for ( int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

