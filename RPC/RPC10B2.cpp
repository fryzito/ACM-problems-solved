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
int n, m, invalid;
struct pp{
  int vot, id;
  string nam;
  bool operator< (const pp &B) const{
    if( vot != B.vot )
      return vot > B.vot;
    return id < B.id;
  }
} name[MAXN];
double roundx(double x) { return floor(x * 100 + 0.5) / 100; }
string str,s3;
char str2[MAXN];
int main(){
  S2(n,m);
  for( int i  = 0; i < n; i++ ){
    // SS(str2);
    cin>>s3;
    name[i].nam=s3;
    name[i].id = i;
  }
  REP(i,m){
    // SS(str2);
    cin >> s3;
    int x = count(s3.begin(),s3.end(), 'X' );
    if( !x  || x > 1 ){
      invalid++;
      continue;
    }

    x = s3.find('X');
    name[x].vot++;
  }
  sort( name, name+n );
  REP(i,n){
    printf("%s %.2lf%%\n",name[i].nam.c_str(),roundx(100.0*((double)name[i].vot/(double)m)));
  }
  printf("Invalid %.2lf%%\n",roundx(100.0*(double)invalid/(double)m));

}
