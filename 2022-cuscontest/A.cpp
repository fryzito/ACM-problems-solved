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
char str[MAXN];
int main(){

    int n;
    S(n);
    while(n--){

        int ans_global = INF;
        SS(str);


        string cadena = (string)str;

        if(cadena.size()!= 26){
            cout << "imposible" <<endl;
        } else {

            string patron = "abcdefghijklmnopqrstuvwxyz";

            REP(i,26){

                string posfix = patron.substr(i,patron.size()-i);
                string prefix = patron.substr(0,i);

                string generado = posfix + prefix;

                // se comparan los str y se saca el minimo
                int ans = 0;
                REP(i,26){
                    if(cadena[i]!=generado[i]){

                        ans++;

                    }
                }
                //P(ans);
                ans_global = std::min(ans_global,ans);

            }

            P(ans_global);
            
        }   
        
    }

    return 0;
}