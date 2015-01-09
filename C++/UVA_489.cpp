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
#define vint vector<int>
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define fd(i,y,x) for(int i=y;i>=x;i--)
#define clr(A,x) memset(A,x,sizeof(A))
#define oo (1<<30)
#define eps (1e-9)
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
char str1[10000];
char str2[10000];
int main(){
  int n;S(n);
  bool total;
  while(n!=-1){
    scanf("%[^\n]\n",str1);
    scanf("%[^\n]\n",str2);
    printf("Round %d\n",n);
    int  cont=0,machet=0;
    for(int i=0;str2[i];i++) {
      bool found = 0;
      for(int j=0;str1[j];j++){
	if(str1[j]==str2[i]){
	  str1[j]='*';
	  machet++;
	  found=1;
	}
      }
      if(!found) cont++;
      if(cont==7||machet==strlen(str1)) break;
    }
    if(cont==7) puts("You lose.");
    else if(machet==strlen(str1)) puts("You win.");
    else puts("You chickened out.");
    S(n);
  }
  return 0;	
}
