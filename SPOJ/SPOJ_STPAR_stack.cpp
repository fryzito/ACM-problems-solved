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
#define P(x)printf("%d\n",x)
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 103
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}

//https://www.spoj.com/problems/STPAR/
// the solution is basicly a simulation problem with a stack and find the order 1,2,3,...,n-1

int A[1003];
int main(){
    int n;
    while(cin>>n && n){
        stack<int> pila;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>A[i];
            //cout << A[i] << " ";
        }
        //cout << endl;
        bool ans = true;
        int ini = 1;
        for(int i=0;i<n;i++){
            if(A[i]==ini){
                ini++;
                continue;
            } else {
                // preguntar 
                if(pila.empty()){
                    pila.push(A[i]);
                } else {
                    if(pila.top()==ini){
                        ini++;
                        pila.pop();
                        i--; // impotant to not pass the next element A[i]
                    } else {
                        if(pila.top()>A[i]){
                            pila.push(A[i]);
                        } else {
                            ans = false;
                            i = n;
                            break;
                        }
                    }
                }
            }
        }

        cout << (ans?"yes":"no") << endl;

    }

    return 0;
}