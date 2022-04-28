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
#define LSOneD(i) ((i&(i+1))-1)
#define LSOneI(i) (i | (i+1))
#define MOD 100007
#define MAXN 1024
using namespace std;
ll f[MAXN][MAXN],v[MAXN][MAXN],value;
int n,nc,q,x,y,x2,y2;
ll sum(int x,int y){
    ll r=0;
    for(int i=x;i>=0;i=LSOneD(i))
        for(int j=y;j>=0;j=LSOneD(j))
            r+=f[i][j];
    return r;
}
void inc(int x,int y,ll delta){
    for(int i=x;i<n;i=LSOneI(i))
        for(int j=y;j<n;j=LSOneI(j))
            f[i][j]+=delta;
    
}
int main(){
    S(nc);
    while(nc--){
        CLR(f,0);
        CLR(v,0);
        n=100007;
        S(q);
        while(q--){
            scanf("%d %d %d\n",&x,&y,&value);
            inc(x,y,value);
        }
        S(q);
        while(q--){
            scanf("%d %d %d\n",&x,&y,&x2,&y2);
            printf("%lld\n",sum(x2,y2)+sum(x-1,y-1)-sum(x-1,y2)-sum(x2,y-1));
        }
    }
    return 0;
}
