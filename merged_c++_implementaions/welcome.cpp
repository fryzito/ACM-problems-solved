#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
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
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
char str1[100];
char str2[100];
int main(){
  int n;S(n);
  vector<pair<string,string> > nombre,apellido;
  while(n){
    while(n--){
      scanf("%s",str1);
      scanf("%[^\n]",str2);
      nombre.pb(mp((string)str1,(string)str2));
      apellido.pb(mp((string)str2,(string)str1));
    }
    putchar('\n');
    sort(ALL(nombre));
    sort(ALL(apellido));
    REP(i,nombre.size()){
      dbg2(nombre[i].f,nombre[i].s);
    }
    putchar('\n');
    REP(i,apellido.size()){
      dbg2(apellido[i].f,apellido[i].s);
    }
    S(n);
  }
  return 0;	
}
