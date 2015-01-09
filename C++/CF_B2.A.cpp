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
string s1;
int nro,n;
int main(){
  S(n);
  map<string,int> mapa;
  map<string,int>::iterator it;
  vector<pair<string,int> > v;
  while(n--){
    cin >> s1 >> nro;
    v.pb(mp(s1,nro));
    mapa[s1]-=nro;
  }
  int maxi=-INF;
  for(it = mapa.begin();it!=mapa.end();it++) {
    if(maxi<(*it).s){
      maxi=(*it).s;
    }
  }
  map<string,int> aux;
  REP(i,SZ(v)){
    aux[v[i].first]+=v[i].second;
    for(it = aux.begin();it!=aux.end();it++) {
      if((*it).s==maxi){
	cout<<(*it).f<<endl;
	return 0;
      }
    }
  }
  return 0;
}
