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
#define ones(x) __builtin_popcount(x)
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
#define MAXN 100005
using namespace std;
int n,m,b,e,rep,a,d,ini,fin,techo,piso,auxa,auxb;
struct terna{
  int a,b,d;
  terna(){}
  terna(int pa,int pb,int pc){a=pa;b=pb;d=pc;}
};
int main(){
  while(S2(n,m)==2,n||m){
    vii v;
    int iscross=0;
    REP(i,n){
      S2(b,e);
      v.pb(mp(b,e));
    }
    vector<terna> v2;
    REP(i,m){
      scanf("%d %d %d\n",&b,&e,&rep);
      if(e>b+rep) iscross=1;
      v2.pb(terna(b,e,rep));
    }  
    if(iscross){
      printf("CONFLICT\n");
      continue;
    }
    sort(ALL(v));
    REPN(i,1,v.size()){
      if(v[i].f<v[i-1].s) {
	iscross=1;
	break;
      }
    }
    if(!iscross){
      REP(i,n){
	  ini=v[i].f;
	  fin=v[i].s;
	REP(j,m){
	  a=v2[j].a;
	  b=v2[j].b;
	  d=v2[j].d;
	  // verificar si ambos son menores
	  if(ini<a&&fin<a) continue;
	  // hallar techo
	  techo=((ini-a)+d-1)/d;
	  auxa=a+(d*techo);
	  auxb=b+(d*techo);
	  if(ini<auxa){
	    if(fin<=auxa) continue;
	    else {
	      iscross=1;
	      break;
	    }
	  } else {
	    if(auxb<=ini) continue;
	    else {
	      iscross=1;
	      break;
	    }
	  }
	  if(iscross) break;
	  // hallar piso
	  piso=(ini-a)/d;
	  auxa=a+(d*piso);
	  auxb=b+(d*piso);
	  if(ini<auxa){
	    if(fin<=auxa) continue;
	    else {
	      iscross=1;
	      break;
	    }
	  } else {
	    if(auxb<=ini) continue;
	    else {
	      iscross=1;
	      break;
	    }
	  }
	}
      }
    } 
    printf("%s\n",iscross?"CONFLICT":"NO CONFLICT");
  }
  return 0;
}
