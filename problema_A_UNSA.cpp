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
#define SS(str) scanf("%[^\n]\n",str)
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
int counting(int n){
    
    if(n<10) return 1;
    if(n<100) return 2;

    int conteo=0;
    int qts=1;
    int i;
    int ini = 100;
    if(n-ini+1>500){
        
        for(i=100;i<=min(n,999);i++){
            if(conteo==500){
                qts+=1;
                conteo = 0;            
            }
            conteo += 1;
        }

    }

    if(n <= 999) return 2+qts;

    conteo=0;
    qts+=1;
    ini = 1000;
    if(n-ini+1>500){
        
        for(i=1000;i<=min(n,9999);i++){
            if(conteo==500){
                qts+=1;
                conteo = 0;
                //dbg(true);
            }
            conteo += 1;
        }

    } 
    if(n <= 9999) return 2+qts;

    conteo=0;
    qts+=1;
    ini = 10000;
    if(n-ini+1>500){
        
        for(i=10000;i<=min(n,99999);i++){
            if(conteo==500){
                qts+=1;
                conteo = 0;
                //dbg(true);
            }
            conteo += 1;
        }

    } 
    if(n <= 99999) return 2+qts;
    else return 2+qts+1;
    
    
}
int main(){
    int n;
    vector<int>v;
    v.push_back(1);
    v.push_back(100);
    v.push_back(599);
    v.push_back(1000);
    v.push_back(10000);
    for(int i=0;i<=v.size();i++){
        //S(v[i]);
        P(counting(v[i]));
    }

    return 0;
}