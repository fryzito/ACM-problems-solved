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
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MOD 100007
#define MAXN 100005
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int A[20];
string str;
int nro;
int main(){
  std::vector<int> v;
  std::vector<int>::iterator it;  
  cin >> str >> nro;
  int sz=str.size();
  REP(i,str.size()){
    v.pb(str[i]-'0');
  }

  it = v.begin();
  int j=0; // 
  int i=0; // pos
  while(i<sz&&nro>0){
    j=i+1;
    int mini = min(nro+i+1,sz);
    int idmayor,maxvalue=-INF;
    
    REPN(k,j,mini){
      if(maxvalue<v[k]){
	maxvalue=v[k];
	idmayor=k;
      }
    }
    // dbg3(j,mini,i);
    // dbg3(v[i],maxvalue,i); 
    if(v[i]>=maxvalue){
      i++;
      continue;
    } else {
      // swap insert deleted
      v.erase(it+idmayor);
      v.insert(it+i,maxvalue); // Ojo nueva posicion
      //v[i]=maxvalue;
      nro-=(idmayor-i);
      i++;
    }
    // REP(p,v.size()){
    //   printf("%d",v[p]);
    // }
    // putchar('\n');
    // dbg2(maxvalue,nro);
  }

  REP(i,v.size()){
    printf("%d",v[i]);
  }
  putchar('\n');
  
  return 0;	
}
