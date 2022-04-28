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
char str[10];
char flag;
int nro;
int main(){
  int nc;S(nc);
  vector<pair <int,int> > v;
  while(nc--){
    scanf("%s %d %c\n",str,&nro,&flag);
    string aux=(string)str;
    if(flag=='N'){
      
      if(aux.size()==2) {
	if(aux[0]=='>') {
	  v.pb(mp(nro,2));
	} else {
	  v.pb(mp(nro,1));
	}
      } else {
	if(aux[0]=='>') {
	  v.pb(mp(nro,4));
	} else {
	  v.pb(mp(nro,3));
	}
      }
      
    } else {
      if(aux.size()==2) {
	if(aux[0]=='>') {
	  v.pb(mp(nro,3));
	} else {
	  v.pb(mp(nro,4));
	}
      } else {
	if(aux[0]=='>') {
	  v.pb(mp(nro,1));
	} else {
	  v.pb(mp(nro,2));
	}
      }
    }
  }
  pair<int,int> infimo  = mp(-INF,0);
  pair<int,int> supremo = mp(INF,0);
  // REP(i,v.size()){
  //   dbg2(v[i].f,v[i].s);
  // }  
  REP(i,v.size()){
    if(v[i].s&1){
      if(infimo.f<v[i].f or (infimo.f==v[i].f&&infimo.s==3&&v[i].s==1)){
	infimo=v[i];
      }   
    } else {
      if(supremo.f>v[i].f or (supremo.f==v[i].f&&supremo.s==4&&v[i].s==2)){
	supremo=v[i];
      }
    } 
  }
   //   dbg2(infimo.f,infimo.s);
   // dbg2(supremo.f,supremo.s);
  if(infimo.f>supremo.f)
    printf("Impossible\n");
  else {
    if(infimo.s==3&&infimo.f!=supremo.f)
      printf("%d\n",infimo.f);
    else
      if(supremo.s==4&&infimo.f!=supremo.f)
	printf("%d\n",supremo.f);
      else{
	if(infimo.f==supremo.f&&infimo.s+supremo.s==7)
	  printf("%d\n",supremo.f);
	else
	  if(supremo.f!=infimo.f&&infimo.f+1!=supremo.f)
	    printf("%d\n",supremo.f-1);
	  else
	    printf("Impossible\n");	  
      }
  }
  return 0;
}

