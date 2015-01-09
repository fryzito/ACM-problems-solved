#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
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
#define S(x)scanf("%d\n",&x)
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 1000006
using namespace std;
//char str[MAXN];
//char str1[10];
string str1;
string str;
int main(){
  int nc,q;S(nc);
  scanf("\n");
  while(nc--){
    cin>>str;
    // scanf("\n%[^\n]\n",str);
    // dbg((string)str);
    map<string,vector<int> > mapa;
    string aux;
    int sz=str.size();
    sz-=8;
    if(sz<0) sz=0;
    REP(i,sz){
      aux="";
      REP(j,9){aux+=str[i+j];}
      mapa[aux].pb(i);
    }
    S(q);
    while(q--){
      cin >> str1;
      //scanf("%[^\n]\n",str1);
      string cadena=(string)str1;
      
      if(mapa[cadena].size()!=0){
	REP(k,mapa[cadena].size()){
	  if(k!=mapa[cadena].size()-1)
	    printf("%d ",mapa[cadena][k]);
	  else
	    printf("%d\n",mapa[cadena][k]);
	}

      } else {
	printf("No occurrences found.\n");
      }
      
    }
    if(nc) putchar('\n');
  }
  return 0;	
}
