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
#define eps (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
string s1[3] = {"AI","AT","IT"};
int main(){
  int nc,n;S(nc);
  while(nc--){
    S(n);
    char Angela,Bernardo;
    int contAng=0,contBer=0;
    REP(i,n){
      Angela=getchar();
      Bernardo=getchar();
      //dbg2(Angela,Bernardo);
      string st="";
      if(Angela>Bernardo){ 
	st+=Bernardo;
	st+=Angela;
      } else {
	st+=Angela;
	st+=Bernardo;
      }
      int nro=-1;
      //dbg(st);
      REP(i,3){
	if(s1[i]==st){ nro=i; break;}
      }

      switch(nro) {
      case 0:
	Angela=='A' ? contAng++ : contBer++;
	break;
      case 1:
	Angela=='T' ? contAng++ : contBer++;	
	break;
      case 2:
	Angela=='I' ? contAng++ : contBer++;
	break;
      default:
	// Empate
	break;
      }
    }
    if(contAng>contBer)
      printf("Angela gana\n");
    else if(contBer>contAng)
      printf("Bernardo gana\n");
    else
      printf("Empate\n");
  }
  return 0;	
}
