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
ll maxvalue = 2000000000;
int maxv,len;
set<ll>::iterator it;
int main(){
  ll A[4]={2,3,5,7}; maxv=0;
  vector<ll> v(A,A+4);
  set<ll> rpta(A,A+4); rpta.insert(1);
  while((int)rpta.size()<5842){
    // dbg(maxv);
    set<ll> st;
    len = v.size();
    REP(i,4){
      REP(j,len){
	if(v[j]*A[i]<=maxvalue && v[j]*A[i] > 0)
	  st.insert(v[j]*A[i]);
      }
    }
    v.clear();
    for(it=st.begin();it!=st.end();it++){
      rpta.insert(*it);
      v.pb(*it);
      // dbg(*it);
      // if(*it>maxv) maxv=*it;
    }
    // dbg(rpta.size());
    // putchar('\n');
  }
  vector<ll> v2(rpta.begin(),rpta.end());
  int nro,indice;
  while(S(nro)==1,nro){
    indice = nro%100;
    if(indice < 10){
      switch(indice){
      case 1:
	printf("The %dst humble number is %lld.\n",nro,v2[nro-1]);
	break;
      case 2:
	printf("The %dnd humble number is %lld.\n",nro,v2[nro-1]);
	break;
      case 3:
	printf("The %drd humble number is %lld.\n",nro,v2[nro-1]);
	break;
      default:
	printf("The %dth humble number is %lld.\n",nro,v2[nro-1]);
	break;      
      }
    } else {
      int decimal = indice/10;
      if(decimal==1)
	printf("The %dth humble number is %lld.\n",nro,v2[nro-1]);
      else{
	indice%=10;
	switch(indice){
	case 1:
	  printf("The %dst humble number is %lld.\n",nro,v2[nro-1]);
	  break;
	case 2:
	  printf("The %dnd humble number is %lld.\n",nro,v2[nro-1]);
	  break;
	case 3:
	  printf("The %drd humble number is %lld.\n",nro,v2[nro-1]);
	  break;
	default:
	  printf("The %dth humble number is %lld.\n",nro,v2[nro-1]);
	  break;      
	}
      }
    }
  }
  return 0;
}
