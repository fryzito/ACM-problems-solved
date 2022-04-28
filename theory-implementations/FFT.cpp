#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<cmath>
#include<stack>
#include<cstring>
#include<algorithm>
#include<sstream>
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define REPR(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define eps (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define PI acos(-1)
using namespace std;
pair<double,double> operator +(const pair<double,double> &a,const pair<double,double> &b){ return mp(a.f+b.f,a.s+b.s); }
pair<double,double> operator *(const pair<double,double> &a,const pair<double,double> &b){ return mp(a.f*b.f - b.s*a.s,a.f*b.s + b.f*a.s);
}
int main(){
  //leer primer polinomio
  int gp,gs;
  printf("Ingrese el grado del primer polinomio\n");
  scanf("%d\n",&gp);
  gp++; int P1[gp];
  REP(i,gp){
    scanf("%d",&P1[i]);
  }
  // leer segundo polinomio
  printf("Ingrese el grado del segundo polinomio\n");
  scanf("%d\n",&gs);
  gs++;
  int P2[gs];
  REP(i,gs){
    scanf("%d",&P2[i]);
  }
  
  // REP(i,gp)
  //   printf("%d ",P1[i]);
  // putchar('\n');
  
  // REP(i,gs)
  //   printf("%d ",P2[i]);
  // putchar('\n');
  // multiplicar polinomis
  int gr=gp+gs-1;
  int PR[gr];
  if(gr&1) gr++; // si es impar incrementar en uno.
  CLR(PR,0);
  REPR(j,gs-1,0){
    REPR(i,gp-1,0){
      PR[i+j]+=P2[j]*P1[i];
    }
  }
  // Hallando elementos de la matriz
  int n=gr;
  pair<double,double> w[n];
  double teta=2*PI/n;
  double ang2=0;
  double a,b;
  int A,B;
  REP(k,n){
    A=cos(ang2);
    B=sin(ang2);
    w[k] = mp(A,B);
    ang2+=teta;
  }
  
  // Multiplicacion de Matrices
  int M[n][n];
  REP(i,n){
    M[i][0] = M[0][i]=1;
  }
  REPN(i,1,n){
    REPN(j,1,n){
      M[i][j]=i*j;
    }
  }
  
  pair<double,double> Ma[n][n];
  REP(i,n) Ma[i][0]=Ma[0][i]=mp(1,0);
  REPN(i,1,n){
    REPN(j,1,n){
      if(M[i][j]<n) {
	Ma[i][j] = w[M[i][j]];
      } else {
	if(M[i][j]==n) {
	  Ma[i][j]=mp(1,0);
	} else {
	  Ma[i][j] = w[M[i][j]%n];
	}
      }
    }
  }
  // Inicializando variables
  pair<double,double> col1[gp];
  pair<double,double> res1[gp];
  REP(i,gp){
      col1[i].f=P1[i];
      col1[i].s=0;
  }
  REPN(i,gp,n){col1[i].f=0;col1[i].s=0;}
  printf("Elementos de la matris con los coeficientes del polinomio\n");
  REP(i,n){
    dbg2(col1[i].f,col1[i].s);
  }
  // Multiplicacion Matriz
  pair<double,double> aux;
  //REP(i,n) res1[i].f=res1[i].s=0;
  REP(i,n){
    REP(j,n){
      aux=Ma[i][j]*col1[j];
      res1[i]=(aux+res1[i]);
    }
  }
  
  // Inicializando variables; 
  pair<double,double> col2[gs],res2[gs];
  REP(i,n){
    if(i<gs)
      col2[i]=mp(P2[i],0);
    else
      col1[i]=mp(0,0);
  }
  // Multiplicacion Matriz 2
  REP(i,gs) res2[i]=mp(0,0);
  REP(i,n){
    REP(j,n){
      res2[i]=(Ma[i][j]*col2[j])+res2[i];
    }
  }

  // Multiplicacion Punto
  printf("Elementos de la matris con los resultados de la Primera Multiplicacion\n");
  REP(i,n){
    dbg2(res1[i].f,res1[i].s);
  }
  printf("Elementos de la matris con los resultados de la Segunda Multiplicacion\n");
  REP(i,n){
    dbg2(res2[i].f,res2[i].s);

  }
  printf("Elementos de la matris con los resultados del producto punto\n");
  pair<double,double> Y[n];
  REP(i,n){
    Y[i]=res1[i]*res2[i];
    printf("%f %fi\n",Y[i].f,Y[i].s);
  }
  // Respuesta en Y arreglo de numeros imaginarios
  return 0;
}
