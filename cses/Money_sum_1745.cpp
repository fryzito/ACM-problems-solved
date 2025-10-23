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
#define MAXN 1004
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int A[MAXN];
int main(){

    const int maxN = 100;
    const int max_x_i = 1000;
    const int max_value = maxN * max_x_i + 1;
    int n;
    S(n);
    
    int sum = 0;
    REP(i,n){
        SC(A[i]);
        sum += A[i];
    }

    int dp1[max_value];
    int dp2[max_value];

    CLR(dp1,0);
    CLR(dp2,0);

    dp1[0]= 1;
    int size;
    for(int i=0;i<n; i++){

        for(int j=0;j<=sum; j++){
            if(dp1[j]){
                dp2[j+A[i]] = 1;
            }
        }

        size = 0;
        // update the new dp obtained with the last ones
        for(int j=1;j<=sum; j++){
            dp1[j] = std::max(dp1[j],dp2[j]);
            if(dp1[j])
                size++;
        }
    }
    printf("%d\n",size);
    REPN(j,1,sum+1){
        if(dp1[j])
            printf("%d%c",j,j==sum?'\n':' ');

    }

    return 0;
}