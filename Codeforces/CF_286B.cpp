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
vector<int> A[103][103],G[MAXN],nodos;
bool visit[103],goal;
int n,m,b,e,w,q,cnt;
void DFS(int nodo,int fin){
    if(!visit[nodo]){
        visit[nodo]=1;
        if(nodo==fin){
            map<int,int> mapa;
            map<int,int>::iterator it;
            printf("%d ",nodos[0]);
            REPN(i,1,nodos.size()){
                REP(j,A[nodos[i-1]][nodos[i]].size()){
                    mapa[A[nodos[i-1]][nodos[i]][j]]++;
                }
                printf("%d%c",nodos[i],char(i==nodos.size()-1?10:32));
            }
            for(it=mapa.begin();it!=mapa.end();it++){
                if(it->s==nodos.size()-1) cnt++;
            }
            visit[nodo]=0;
            return ;
        } else {
            for(int j=0;j<G[nodo].size();j++){
                nodos.pb(G[nodo][j]);
                DFS(G[nodo][j],fin);
                nodos.erase(nodos.begin()+((int)nodos.size()-1));
            }
            visit[nodo]=0;
        }
    }
}
int main(){
    S2(n,m);
    REP(i,m){
        SC2(b,e); S(w);
        G[b].pb(e);
        G[e].pb(b);
        A[b][e].pb(w);
        A[e][b].pb(w);
    }
    S(q);
    while(q--){
        S2(b,e);
        nodos.clear();
        CLR(visit,0);
        cnt=0;
        nodos.pb(b);
        DFS(b,e);
        P(cnt);
    }
    return 0;
}
