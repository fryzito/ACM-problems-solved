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
#define MAXN 400001
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}

int memo[MAXN];
vector<int>v2;

int go(int padre, int n, int lvl, int indx){
    if(memo[n]!=-1) return memo[n];

    if(n<=4) return memo[n] = n;

    int ans = MAXN;
    for(int j=indx; j>=0; j--){
        if(n-v2[j]<0) continue;
        ans = std::min(ans,go(v2[j],n-v2[j],lvl+1, indx));
    }
    memo[n] = ans + 1;
    return memo[n];
}

int main(){

    memset(memo, -1, MAXN * sizeof(memo[0]));

    vector<int> v;
    int i;
    i=1;
    while(i*i*i<MAXN){
        // printf("%d=%d\n",i,i*i*i);
        v.pb(i*i*i);
        i++;
    }
    int sum = 0;
    i=1;
    while(sum+i*i<MAXN){
        // printf("%d=%d\n",i,sum+i*i);
        v.pb(sum+i*i);
        sum+=i*i;
        i++;
    }

    // sort(ALL(v));
    set<int> s(ALL(v));
    v2.assign(s.begin(), s.end());
    
    int n;
    S(n);
    while(n!=-1){

        // utilizando lower_bound
        auto it = lower_bound(ALL(v2),n);

        int indx = it-v2.begin();
        if(v2[indx]!=n) indx--;
        
        int ans;
        ans = go(0,n,0,indx);
        P(ans);
        
        S(n);
    }

    return 0;
}