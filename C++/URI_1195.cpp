#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define REPR(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define EPS (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define dbg3(x,y,z)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define S(x)scanf("%d\n",&x)
#define SS(str)scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 40000007
using namespace std;
int n,nc,nro,m;
vi preV,posV,inV;
typedef struct nodo * pnodo;
struct nodo{
  int valor;
  pnodo L,R;
  nodo(){}//se crear solo para ser remplazado
  nodo(int val):valor(val),R(NULL),L(NULL) {}
};
void insertar(pnodo &A,int nro){
  if(A==NULL) {A=new nodo(nro);}
  else{
    if(A->valor>nro){
      insertar(A->L,nro);
    }else {
      insertar(A->R,nro);
    }
  }
  return;
}
void pre(pnodo A){
  if(A!=NULL){
    preV.pb(A->valor);
    pre(A->L);
    pre(A->R);
  }
}
void in(pnodo A){
  if(A!=NULL){
    in(A->L);
    inV.pb(A->valor);
    in(A->R);
  }
}
void pos(pnodo A){
  if(A!=NULL){
    pos(A->L);
    pos(A->R);
    posV.pb(A->valor);
  }
}
int main(){
  int cases=0;
  S(nc);
  while(nc--){
    S(n);
    pnodo arbol=NULL;
    REP(i,n){
      SC(nro);
      insertar(arbol,nro);
    }
    preV.clear();inV.clear();posV.clear();
    pre(arbol);
    in(arbol);
    pos(arbol);
    printf("Case %d:\n",++cases);
    printf("Pre.:");
    REP(i,preV.size()){
      printf(" %d",preV[i]);
    }
    putchar('\n');
    printf("In..:");
    REP(i,preV.size()){
      printf(" %d",inV[i]);
    }
    putchar('\n');
    printf("Post:");
    REP(i,preV.size()){
      printf(" %d",posV[i]);
    }
    putchar('\n');
    putchar('\n');
  }
  return 0;
}
