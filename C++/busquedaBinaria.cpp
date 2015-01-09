#include <iostream>
#include <vector>
//modulo de busqueda binaria
using namespace std;
int main()
{
bool busqueda_dicotomica(vector<int> v, int principio, int fin, int x){
    bool res;
    if(principio < fin){
        int m = (principio + fin)/2;
        if(x < v[m]) res = busqueda_dicotomica(v, principio, m, x);
        else if(x > v[m]) res = busqueda_dicotomica(v, m+1, fin, x);
        else res = true;
    }else res = false;
    return res;
}
/*{Post: Si se encuentra devuelve true, sino false}*/
}
