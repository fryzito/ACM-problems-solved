// link problema https://open.kattis.com/problems/circuitmath
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
//4
//T F T F
//A B * C D + - +
char str1[300];
char str2[300];
int main(){
    int n;
    S(n);
    char valor;
    map<char,char> mapa;
    for(int i=0;i<n;i++){
        scanf("%c ",&valor);
        mapa['A'+i] = valor;
    }
    scanf("\n");
    // for (auto val : mapa) {
    //     cout << val.first << " = " << val.second << endl;
    // }
    SS(str2);
    stack<char> pila;

    //Recorremos la expresion postfija
    for(int i=0;str2[i]!='\0';i++){
        if(str2[i]==' ') continue;
        // preguntamos si es un operador o un operando
        if(isalpha(str2[i])){
            // es necesario colocar el valor mapeado según la letra que toque
            pila.push(mapa[str2[i]]);

        } else {
            switch (str2[i]) {
            case '*': {
                //desapilar dos operandos
                char opd1 = pila.top(); pila.pop();
                char opd2 = pila.top(); pila.pop();
                if (opd1=='T' && opd2=='T') {
                    pila.push('T');
                } else {
                    pila.push('F');
                }
                break;
            }
            case '+':{
                //desapilar dos operandos
                char opd1 = pila.top(); pila.pop();
                char opd2 = pila.top(); pila.pop();
                if (opd1=='T' || opd2=='T') {
                    pila.push('T');
                } else {
                    pila.push('F');
                }
                break;
            }
            default:{
                //desapilar un operandos
                char opd1 = pila.top(); pila.pop();
                if (opd1=='T') {
                    pila.push('F');
                } else {
                    pila.push('T');
                }
                break;
            }
            }
        }
    }
    printf("%c\n",pila.top());
    return 0;
}