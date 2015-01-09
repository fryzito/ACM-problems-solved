#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<cstring>
#include<algorithm>
#include<sstream>
#define ll long long
#define VI vector<int>
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define REPR(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define EPS (1e-4)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 1003
using namespace std;
struct circulo{
  double x,y,r;
  circulo(){}
  circulo(double px,double py,double pr){x=px;y=py;r=pr;}
};
double dist(circulo A,circulo B){
  double dx = fabs(A.x-B.x);
  double dy = fabs(A.y-B.y);
  double dis = sqrt(sqr(dx)+sqr(dy))-A.r-B.r;
  return dis;
}
double M[MAXN][MAXN];
int main(){
  int nc,n,q;S(nc);
  circulo C;
  while(nc--){
    vector<circulo> v;
    S(n);
    REP(i,n){
      scanf("%lf %lf %lf\n",&C.x,&C.y,&C.r);
      v.pb(C);
    }
    // crear la matriz de Floyd    
    //limpiar matriz
    REP(i,n){
      REP(j,n){
	if(i==j) M[i][j]=0.0;
	else     M[i][j]=(double)INF;
      }
    }
    double distancia;
    REP(i,n){
      REPN(j,i+1,n){
	distancia=dist(v[i],v[j]);
	M[i][j] = max(0.0, distancia);
	M[j][i] = max(0.0, distancia);
      }
    }
    // Aplicando Floyd
    REP(k,n){
      REP(i,n){
	REP(j,n){
	  if(M[i][j]>M[i][k]+M[k][j]){
	    M[i][j]=M[i][k]+M[k][j];
	  }
	} 
      }  
    }
    // REP(i,n){
    //   REP(j,n){
    // 	printf("%lf ",M[i][j]);
    //   } 
    //   putchar('\n');
    // }  

    S(q);
    int ini,to;
    while(q--){
      S2(ini,to);
      printf("%.4lf\n",M[ini][to]);
    }
    if(nc) putchar('\n');
  }
  return 0;	
}
