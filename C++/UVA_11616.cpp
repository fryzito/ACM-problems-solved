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
#define MAXN 103
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int V[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
string A[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
char str[MAXN];
int nro;
int buscar(string cad){
  REP(i,13){
    if(A[i]==cad) return i;
  }
  return -1;
}
int main(){
  while(SS(str)==1){
    if(isdigit(str[0])){
      nro=s2i((string)str);
      int i=0;
      while(nro){
	while(nro<V[i]) i++;
	printf("%s",A[i].c_str());
	nro-=V[i];
      }
      putchar('\n');
    } else {
      nro=0;
      REPN(i,1,strlen(str)){
	string s1="";
	s1+=str[i-1];
	s1+=str[i];
	int id = buscar(s1);
	if(id!=-1){
	  str[i-1]='-';
	  str[i]='-';
	  nro+=V[id];
	}
      }
      REP(i,strlen(str)){
	if(str[i]!='-'){
	  string s1="";
	  s1+=str[i];
	  int id=buscar(s1);
	  nro+=V[id];
	}
      }
      P(nro);
    }
  }
  return 0;
}
