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
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define SS(str) scanf("%[^\n]\n",str)
#define P(x)printf("%d\n",x)
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 103
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}

char str[402];

//https://www.spoj.com/problems/ONP/
// The solution is to use a stack to convert from infix to postfix notation
// is necesary to usea a stack of strings in order to save the postfix notation on the stack

int main(){
    int TC;
    S(TC);
    while(TC--){
        SS(str);
        stack<string> pila;
        for(int i=0;str[i]!='\0';i++){
            //putchar(str[i]);
            if(str[i]==')'){
                // desapilamos
                vector<string> vAux;
                while(pila.top()!="("){
                    vAux.push_back(pila.top());
                    pila.pop();
                }
                pila.pop(); // extraes el ultimo '('

                // convertimos
                string strAux="";
                strAux+=vAux[vAux.size()-1];
                strAux+=vAux[0];
                strAux+=vAux[1];
                // apilamos conversion
                pila.push(strAux);
            } else {
                // apilamos
                pila.push(string(1,str[i]));
            }
        }
        printf("%s\n",pila.top().c_str());
    }
    return 0;
}