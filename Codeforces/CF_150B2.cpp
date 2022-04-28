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
int n,N1[10],N2[10];
int lenN(int nro){
  int ans=0;
  if(nro<10) return 1;
  while(nro){
    ans++;
    nro/=10;
  }
  return ans;
}
int sumA(int A[10],int L){
  int nro=0;
  int p=1;
  REP(i,L){
    nro+=A[L-i-1]*p;
    p*=10;
  }
  return nro;
}
int Arra[11] = {1,2,3,4,5,6,7,8,9,10,11};
int main(){
  S(n);
  if(n<12) {printf("%d\n",n);return 0;}
  int LEN = lenN(n);set<int> st(Arra,Arra+11);
  for(int L=2;L<=min(LEN,9);L++){
    for(int mask=1;mask<(1<<L);mask++){
      for(int i=0;i<10;i++){
	for(int j=i;j<10;j++){
	  for(int k=0;k<L;k++){
	    if(mask&(1<<k)){
	      N1[k]=i;
	    }else {
	      N1[k]=j;
	    }
	  }
	  // printf("nro1:");
	  // REP(l,L){printf("%d ",N1[l]);}
	  int suma1=sumA(N1,L);
	  // dbg(suma1);
	  if(suma1<=n&&suma1>0)
	    st.insert(suma1);
	}
      }
    }
  }
  if(n==1000000000)
    P((int)st.size()+1);
  else
    P((int)st.size());
  return 0;
}
