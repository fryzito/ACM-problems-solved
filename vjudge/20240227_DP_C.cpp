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
int main(){
    int n;
    S(n);
    //dbg(n);
    std::vector<std::vector<int>> T(MAXN, std::vector<int>(3)); // esto con arreglos causo un desborde de memoria en el stack
    std::vector<std::vector<int>> DP(MAXN, std::vector<int>(3));
    REP(i,n){
        REP(j,3){
            SC(T[i][j]);
        }
    }
    //dbg3(T[0][0],T[0][1],T[0][2]);
    DP[0][0] = T[0][0] ;
    DP[0][1] = T[0][1] ;
    DP[0][2] = T[0][2] ;

    if (n > 2){
        REPN(i,1,n){
            REP(j,3){
                DP[i][j] = T[i][j] + max(DP[i-1][(j+1)%3],DP[i-1][(j+2)%3]);
            }
        }
    }
    // Hallar el maximo valor de DP n-1
    printf("%d\n",max(DP[n-1][0],max(DP[n-1][1], DP[n-1][2])));
    return 0;
}