#include <iostream>
#include <vector>
#include <numeric> // Para std::accumulate

using namespace std;

void solve_binary_search() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long suma_total = accumulate(a.begin(), a.end(), 0LL); // Usar 0LL para asegurar que la suma sea long long
    
    long long bajo = 0;
    long long alto = 20000000; // Equivalente a 2e7 en Python

    while (bajo <= alto) {
        long long medio = bajo + (alto - bajo) / 2;
        long long cuadrado_medio = medio * medio;

        if (cuadrado_medio == suma_total) {
            cout << "YES" << endl;
            return;
        } else if (cuadrado_medio < suma_total) {
            bajo = medio + 1;
        } else {
            alto = medio - 1;
        }
    }

    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve_binary_search();
    }
    return 0;
}