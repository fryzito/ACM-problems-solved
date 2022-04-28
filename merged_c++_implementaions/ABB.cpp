#include <bits/stdc++.h>
#define dbg(x)cout<<#x<<"="<<x<<endl
using namespace std;
typedef struct nodo * pnodo;
struct nodo{
  int valor;
  pnodo L,R;
  nodo(){} // solo se crea para ser reemplazado
  nodo(int vn):valor(vn),L(NULL),R(NULL) {}
};
void insertar(pnodo &A,pnodo val){
  if(A==NULL) {A=val;}
  else {
    if(val->valor<A->valor){
      insertar(A->L,val);
    } else {
      insertar(A->R,val);
    }
  }
  return;
}
// inoden
// preorden
// postorden
void recorrer(pnodo A){
  if(A!=NULL){
    printf("%d ",A->valor);
    recorrer(A->R);
    recorrer(A->L);
  }
  return;
}
int main(){
  pnodo arbol=NULL;
  for(int i=0;i<20;i++){
    insertar(arbol,new nodo(i));
  }
  recorrer(arbol);
}
