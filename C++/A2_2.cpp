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
#define MOD 1000000007
#define MAXN 10004
using namespace std;
char str[MAXN];
int nc;
int main(){
  S(nc);
  while(nc--){
    scanf("%[^\n]\n",str);
    dbg((string)str);
    int sz=strlen(str);
    bool isbegin=0,isend=0;
    if(str[0]=='?') isbegin=1;
    if(str[sz-1]=='?') isend=1;
    vi v;
    REP(i,sz){
      if(str[i]=='?') {
	v.pb(i-1);
	int j=i+1;
	while(j<sz&&str[j]=='?'){
	  j++;
	}
	v.pb(j);
	i=j;
      }
      
    }
    ll rpta=0;
    int inicio=0;
    int fin=v.size();
    if(isbegin){
      rpta++;
      inicio+=2;
    }
    if(isend){
      rpta++;
      fin-=2;
    }
    
    bool enter=0;
    for(int i=inicio;i<fin;i+=2){
      enter=1;
      if(str[v[i+1]]==str[v[i]])
	rpta++;
      else
	rpta+=v[i+1]-v[i];
    }
    
    if(!enter) {
      if(v.size()!=0) {
	rpta--;
      } else {
	rpta++;
      }
    }

    putchar('\n');
    REP(i,v.size()){
      printf("%d ",v[i]);
    }
    putchar('\n');
    printf("%lld\n",rpta);
  }
  return 0;	
}
