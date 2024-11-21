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

char A[1003][1003];
//          R  L  D  U
int dy[4] = {1,-1,0,0};
int dx[4] = {0,0,1,-1};
int n,m;
std::map<ii,ii> parent;
std::map<ii,char> mov;
stack<ii> path;

int BFS(int x, int y ){
    queue<ii> Q;
    Q.push(mp(x,y));
    int distancia = 0;
    parent[{x,y}] = {-1,-1};
    while (!Q.empty()){
        ii p = Q.front(); Q.pop();
        // Realizar lo que se requiere en el nodo
        REP(i,4){
            int x1 = p.f + dx[i];
            int y1 = p.s + dy[i];
            // vemos que no se salga del laberinto
            if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < m){
                if(A[x1][y1] != '#'){
                    parent[{x1,y1}] = p;
                    if(A[x1][y1] == 'B'){
                        // Escribir el recorrido
                        while (parent[{x1,y1}] != mp(-1,-1)){
                            path.push({x1,y1});
                            ii p = parent[{x1,y1}];
                            x1 = p.f;
                            y1 = p.s;
                        }
                        return distancia+1;
                    }
                    A[x1][y1] = '#';
                    Q.push(mp(x1,y1));
                }
            }
        }
        distancia++;
    }
    return -1;
}


int main(){

    mov[{0,1}] = 'R';
    mov[{0,-1}] = 'L';
    mov[{1,0}] = 'D';
    mov[{-1,0}] = 'U';

    S2(n,m);

    REP(i,n){
        SS(A[i]);
    }

    // REP(i,n){
    //     REP(j,m){
    //         cout << A[i][j];
    //     }
    //     cout << endl;
    // }

    int ans = -1;
    REP(i,n){
        REP(j,m){
            if (A[i][j] == 'A'){
                A[i][j] = '#';
                ans = BFS(i,j);
                path.push(mp(i,j));
                break;
            }
        }
    }
    if(ans == -1){
        printf("NO\n");
    } else {
        printf("YES\n");
        ans = path.size() - 1;
        P(ans);
        ii first_ = path.top();
        path.pop();
        while (!path.empty()) {

            ii aux = path.top(); 
            path.pop();
            int dx_ =   aux.f - first_.f;
            int dy_ =   aux.s - first_.s;
            first_ = aux;
            //dbg2(dx_,dy_);
            printf("%c",mov[{dx_,dy_}]);
        }
        printf("\n");
    }
    return 0;
}