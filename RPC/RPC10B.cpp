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
char str[MAXN];
int n,m;
string cad[20];
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
  if(a.f!=b.f)
    return a.f>b.f;
  return a.s<b.s;
}
double roundx(double x) { return floor(x * 100 + 0.5) / 100; }
string s3;
int main(){
  S2(n,m);
  vector<pair<int,int> > v;
  REP(i,n){
    cin >> s3;
    // scanf("%s",str);
    v.pb(mp(0,i));
    cad[i]=s3;
  }
  int cntinvalid=0;
  int base=m;
  scanf("\n");
  while(m--){
    // cin>>s3;
    SS(str);
    int x = count(str,str+n,'X');
    if(!x or x>1){
      cntinvalid++;
      continue;
    }
    x= find(str,str+n,'X')-str;
    // x = s3.find('X');
    v[x].f++;
  }
  sort(ALL(v),cmp);
  REP(i,v.size()){
    printf("%s %.2f%%\n",cad[v[i].s].c_str(),roundx(100.0*((double)v[i].f/(double)base)));
  }
  printf("Invalid %.2f%%\n",roundx(100.0*((double)cntinvalid/(double)base)));
  return 0;
}
