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
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int cnt1,cnt2,x,y;
int main(){
  SC2(cnt1,cnt2);SC2(x,y);
  int bol1=0,bol2=0;
  int id=1;
  while(bol1!=cnt1 || bol2!=cnt2){
    if(id%x!=0&&id%y!=0){
      //Ambos disponibles
      if(cnt1-bol1<cnt2-bol2){
	if(bol2<cnt2){
	  bol2++;
	}else {
	  bol1++;
	}
	id++;
      }else {
	if(bol1<cnt1){
	  bol1++;
	} else {
	  bol2++;
	}
	id++;
      }
    }else if(id%x!=0){
      if(bol1<cnt1) bol1++;
      id++;
    } else if(id%y!=0){
      if(bol2<cnt2) bol2++;      
      id++;
    } else id++;
    //    dbg3(bol1,bol2,id);
  }
  P(id-1);
  return 0;
}
