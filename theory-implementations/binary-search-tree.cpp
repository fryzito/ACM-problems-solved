#include <bits/stdc++.h>

#define MAXN 5000

using namespace std;

typedef struct node * pnode;
vector<int> G[MAXN];
map<int,vector<int>> mapa;

struct node{
    int valor;
    pnode l, r;
    node() {}
    node(int _valor){
        valor = _valor;
        l = NULL;
        r = NULL;
    }
};

pnode T;

void insertar(pnode T, int valor){
    if (T == NULL){
        T = new node(valor);
    } else {
        if(T->valor > valor){
            insertar(T->l,valor);
        } else {
            insertar(T->r,valor);
        }
    }
}



int main(){

    int A[10] = {8, 3, 10, 14, 6, 4, 13, 7, 1};
    
    cout << "Hola Mundo"<<endl;
    for(auto it:A){
        insertar(T,it);
    }





    return 0;
}