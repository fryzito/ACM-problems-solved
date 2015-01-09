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
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MOD 100007
#define MAXN 105
using namespace std;
string a[4],aux;
int dia1,dia2,hora1,hora2,min1,min2,sec1,sec2;
char str[MAXN];
int main(){
  REP(i,4){
    scanf("%[^\n]\n",str);
    a[i]=(string)str;
  }
  istringstream ss1(a[0]);
  istringstream ss2(a[1]);
  istringstream ss3(a[2]);
  istringstream ss4(a[3]);
  ss1 >> aux >> dia1;
  ss3 >> aux >> dia2;
  if(dia1!=dia2)
    printf("%d dia(s)\n",dia2-(dia1+1));
  else
    printf("0 dia(s)\n");
  ss2 >> hora1 >> aux >> min1 >> aux >> sec1;
  ss4 >> hora2 >> aux >> min2 >> aux >> sec2;
  printf("%d hora(s)\n",(24-hora1)+hora2);
  printf("%d minuto(s)\n",min2-min1);
  printf("%d segundo(s)\n",sec2-sec1);
  
  return 0;
}
