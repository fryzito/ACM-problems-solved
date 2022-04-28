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
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 3003
using namespace std;
bool cmp(int a,int b){ return a > b;}
bool cmp2(int a,int b){ return a <= b;}
int A[MAXN];
int B[MAXN];
int main(){
  int n,m;
  scanf("%d %d\n",&n,&m);
  REP(i,n){
    scanf("%d",&A[i]);
  }
  REP(i,m){
    scanf("%d",&B[i]);
  }
  sort(A,A+n,cmp);
  sort(B,B+m);

  vector<int> v(B,B+m);
  vector<int>::iterator t;
  int cont=0;
  REP(i,n){
    t = upper_bound(ALL(v),A[i],cmp2);
    if(t!=v.end()){
      cont++;
            // dbg(v[t-v.begin()]);
      v.erase(t);
    }
  }
  
  printf("%d\n",n-cont);
  return 0;	
}
