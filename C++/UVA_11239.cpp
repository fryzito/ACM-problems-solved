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
char str[MAXN];
int dupli[103];
set<string> sdupli[103];
set<string> aux;
set<string>::iterator it;
bool cmp(pair<int,string> A,pair<int,string> B){
  if(A.f==B.f) {
    return (A.s>B.s);
  } else {
    return (A.f<B.f);
  }
}
int main(){
  SS(str);
  while(str[0]!='0'){
    CLR(dupli,0);
    set<string> sdupli[103];
    int countid=-1;
    vector<pair<string,set<string> > > v;

    while(str[0]!='1'){
      if(isupper(str[0])){
	v.pb(mp((string)str,aux));
	countid++;
      } else {
	v[countid].s.insert((string)str);
      }
      SS(str);
    }
    // eliminando duplicados
    REP(i,v.size()){
      aux=v[i].s;
      REPN(j,i+1,v.size()){
	// v[i] y v[j]
	for(it=v[j].s.begin();it!=v[j].s.end();it++){
	  if(aux.find((*it))!=aux.end()){
	    if(sdupli[i].find((*it))==sdupli[i].end()){
	      sdupli[i].insert((*it));
	      dupli[i]++;
	    }
	    if(sdupli[j].find((*it))==sdupli[j].end()){
	      sdupli[j].insert((*it));
	      dupli[j]++;
	    }
	  }
	}
      }
    }
    vector<pair<int,string> > v1;
    REP(i,v.size()){
      v1.pb(mp(v[i].s.size()-dupli[i],v[i].f));
    }
    sort(RALL(v1),cmp);
    REP(i,v1.size()){
      printf("%s %d\n",v1[i].s.c_str(),v1[i].f);
    }
    SS(str);
  }
  return 0;
}
