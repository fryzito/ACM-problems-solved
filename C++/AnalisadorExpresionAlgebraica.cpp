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
int nc;
char ch;
map<char,int> peso;
int main(){
  peso['+']=peso['-']=0;
  peso['*']=peso['/']=1;
  SC(nc);
  while(nc--){
    scanf("\n");
    stack<char>pila;
    ch=getchar();
    while(true){
      while(true){
	if(ch=='\n'||ch=='\377') break;
	//dbg(ch);
	if(isdigit(ch)){
	  putchar(ch);
	} else {
	  if(ch=='('){
	    pila.push(ch);
	  }else {
	    if(ch==')'){
	      while(pila.top()!='(' || pila.empty()){
		putchar(pila.top());
		pila.pop();
	      }
	      pila.pop();
	    } else {
	      //es un operador
	      if(pila.empty()){
		pila.push(ch);
	      } else {
		while(!pila.empty()&&peso[ch]<=peso[pila.top()] && pila.top()!='('){
		  putchar(pila.top());
		  pila.pop();
		}
		pila.push(ch);
	      }
	    }
	  }
	}
	ch=getchar();
      }
      ch=getchar();
      if(ch=='\n'||ch=='\377') break;
    }
    while(!pila.empty()){
      putchar(pila.top());
      pila.pop();
    }
    putchar('\n');
    if(nc) putchar('\n');
  }
  return 0;
}
