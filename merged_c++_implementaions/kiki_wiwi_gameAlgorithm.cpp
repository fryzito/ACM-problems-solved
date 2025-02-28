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

int con_sols = 0;
int n,m;
// Inicializando tablero
int t[100][100];

void printM(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout <<t[i][j] << " ";
        }
        cout << endl;
    }
    return;
}
int ki_dx[2] = {0, 1};
int ki_dy[2] = {1, 0};
int wi_dx[2] = {-1,0};
int wi_dy[2] = {0,-1};

bool is_piece_kiki(int i, int j){
    bool ans = 1;
    for(int k=0;k<2;k++){
        int ni = i+ki_dx[k];
        int nj = j+ki_dy[k];

        ans &= (0<=ni && ni<n && 0<=nj && nj<m && t[ni][nj]==0);
    }
    return ans;
}

bool is_piece_wiwi(int i, int j){
    bool ans = 1;
    for(int k=0;k<2;k++){
        int ni = i+wi_dx[k];
        int nj = j+wi_dy[k];
        //dbg2(ni,nj);
        ans &= (0<=ni && ni<n && 0<=nj && nj<m && t[ni][nj]==0);
    }
    //dbg(ans);
    return ans;
}

void put_kiki(int i, int j, int lvl){
    t[i][j] = lvl;
    for(int k=0;k<2;k++){
        int ni = i+ki_dx[k];
        int nj = j+ki_dy[k];
        t[ni][nj] = lvl;
    }
    return;
}

void put_wiwi(int i, int j, int lvl){
    t[i][j] = lvl;
    for(int k=0;k<2;k++){
        int ni = i+wi_dx[k];
        int nj = j+wi_dy[k];
        t[ni][nj] = lvl;
    }
    return;
}

void go(int player,int lvl,int root){
    dbg2(lvl,root);
    if(!player){
        // kiki peace used
        int peace_used = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // put kiki piece
                if(t[i][j]==0 && is_piece_kiki(i,j)) {//espacio para piece
                    peace_used = true;

                    put_kiki(i,j,lvl);
                    //printM();
                    // next lvl
                    go(1-player,lvl+1,i*m+j);

                    // clean last put
                    put_kiki(i,j,0);
                }
            }
        }

        if(!peace_used){
            // solution
            printf("%s win!\n",player?"kiki":"wiwi");
            con_sols++;
            printM();
            return;
        }

    } else {
        // wiwi peace used
        int peace_used = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // put wiwi piece
                //dbg2(i,j);
                if(t[i][j]==0 && is_piece_wiwi(i,j)) {//espacio para piece
                    peace_used = true;

                    put_wiwi(i,j,lvl);
                    //printM();
                    // next lvl
                    go(1-player,lvl+1,i*m+j);

                    // clean last put
                    put_wiwi(i,j,0);
                }
            }
        }

        if(!peace_used){
            // solution
            printf("%s win!\n",player?"kiki":"wiwi");
            con_sols++;
            printM();
            return;
        }
        
    }

    return;
}

int main(){
    S2(n,m);
    CLR(t,0);
    // kiki 0
    // wiwi 1
    printM();
    go(0,1,-1);
    cout<<con_sols<<endl;
    return 0;
}