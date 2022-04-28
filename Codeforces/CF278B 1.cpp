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
<<<<<<< HEAD
#define ones(x) __builtin_popcount(x)
=======
>>>>>>> 834af47cfb1c5879470befc7dffcbce3cfbbbcbe
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define dbg3(x,y,z)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define S(x)scanf("%d\n",&x)
<<<<<<< HEAD
#define SS(str)scanf("%[^\n]\n",str)
=======
#define SS(str) scanf("%[^\n]\n",str)
>>>>>>> 834af47cfb1c5879470befc7dffcbce3cfbbbcbe
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
<<<<<<< HEAD
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 1501
using namespace std;
int nro,A[5],sum;
vector<int> v,aux;
int main(){
  S(nro);
  switch(nro){
  case 0:
    printf("YES\n1\n1\n3\n3\n");
    break;
  case 1:
    SC(A[0]);
    printf("YES\n%d\n%d\n%d\n",A[0],3*A[0],3*A[0]);
    break;
  case 2:
    REP(i,2) S(A[i]);
    sort(A,A+2);
    if(3*A[0]<A[1]) printf("NO\n");
    else
      printf("YES\n%d\n%d\n",4*A[0]-A[1],3*A[0]);
    break;
  case 3:
    sum=0;
    REP(i,3){
      S(A[i]);
      v.pb(A[i]);
      sum+=A[i];
    }
    REPN(i,1,MAXN){
      aux=v;
      aux.pb(i);
      int suma=sum+i;
      sort(ALL(aux));
      double a= (double)suma/4.0;
      double b= (double)(aux[1]+aux[2])/2.0;
      double c= aux[3]-aux[0];  
      if(a==b&&b==c){
	printf("YES\n%d\n",i);	
	return 0;
      }
    }
    printf("NO\n");
    break;
  case 4:
    sum=0;
=======
#define f first
#define s second
#define MOD 100007
#define MAXN 4003
using namespace std;
int n,A[5];
int main(){
  S(n);
  switch(n){
  case 0:
    printf("YES\n%d\n%d\n%d\n%d\n",1,2,2,3);
    break;
  case 1:
    
    break;
  case 2:
    
    break;
  case 3:
    
    break;
  case 4:
    int sum=0;
>>>>>>> 834af47cfb1c5879470befc7dffcbce3cfbbbcbe
    REP(i,4){
      S(A[i]);
      sum+=A[i];
    }
    sort(A,A+4);
<<<<<<< HEAD
    double a= sum/4;
    double b= (A[1]+A[2])/2;
    double c= A[3]-A[0];
    // dbg2(3*a,a+b+c);
    printf("%s\n",a==b&&b==c?"YES":"NO");
=======
    int a = sum/4;
    int b = (A[1]+A[2])/2;
    int c = A[3]-A[0];
    int pot=3*a;
    int suma=a+b+c;
      printf("%s\n",pot==suma?"YES":"NO");
>>>>>>> 834af47cfb1c5879470befc7dffcbce3cfbbbcbe
    break;
  }
  return 0;
}
