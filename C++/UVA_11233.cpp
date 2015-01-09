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
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
char str1[22];
char str2[22];
string cadena="aeiou";
bool isconsonant(char x){
  REP(k,cadena.size()) {
    if(cadena[k]==x) return 1;
  }
  return 0;
}
int main(){
  int m,n;
  S2(m,n);
  map<string,string> mapa;
  while(m--){
    scanf("%s %[^\n]\n",str1,str2);
    mapa[(string)str1]=(string)str2;
  }
  while(n--){
    string st;
    scanf("%[^\n]\n",str1);
    int sz=strlen(str1);
    if(mapa.find((string)str1)!=mapa.end()) {
      printf("%s\n",mapa[(string)str1].c_str());
    } else if(!isconsonant(str1[sz-2])&&str1[sz-1]=='y'){
      st = (string)str1;
      st[sz-1]='i';
      st+="es";
      printf("%s\n",st.c_str());
    } else if(str1[sz-1]=='o'||str1[sz-1]=='s'||(str1[sz-2]=='c'&&str1[sz-1]=='h')||(str1[sz-2]=='s'&&str1[sz-1]=='h')||str1[sz-1]=='x'){
      st = (string)str1;
      st+="es";
      printf("%s\n",st.c_str());
    } else {
      st = (string)str1;
      st+='s';
      printf("%s\n",st.c_str());
    }
  }
  return 0;	
}
