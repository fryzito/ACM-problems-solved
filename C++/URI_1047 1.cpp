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
#define SS(str) scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define f first
#define s second
#define MOD 100007
#define MAXN 4003
using namespace std;
int h1,m1,h2,m2,ti,tf,tt;
int main(){
  while(scanf("%d %d %d %d\n",&h1,&m1,&h2,&m2)==4){
    ti=h1*60+m1;
    tf=h2*60+m2;
    if(tf<ti){ 
      tf+=(24*60);
      tt=tf-ti;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tt/60,tt%60);
    } else {
      tt=tf-ti;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tt/60,tt%60);
    }
  }
  
  return 0;
}
