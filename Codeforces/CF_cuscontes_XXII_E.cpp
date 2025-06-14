// https://codeforces.com/group/gHgjxYvnJD/contest/616018/problem/E
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

int n;

// int go(char x, int lvl, int Ms, int Fs, std::string cadena) {

//     //bound 
//     if(Ms < Fs ) return 0;
//     if(Ms > n/2) return 0;

//     //caso base
//     if(lvl == n)  {
//         if(x=='F' && Ms == Fs) {
//             //cout << cadena << endl;
//             return 1;
//         }else {
//             return 0;
//         }
//     } else {
//         //caso recurrente
//         return go('M',lvl+1,Ms+1, Fs, cadena+'M') +  go('F',lvl+1,Ms, Fs+1, cadena+'F');
//     }
// }



long long go(char x, int lvl, int Ms, int Fs) {

    //bound 
    if(Ms < Fs ) return 0;
    if(Ms > n/2) return 0;

    //caso base
    if(lvl == n)  {
        if(x=='F' && Ms == Fs) {
            //cout << cadena << endl;
            return 1LL;
        }else {
            return 0LL;
        }
    } else {
        //caso recurrente
        return go('M',lvl+1,Ms+1, Fs) +  go('F',lvl+1,Ms, Fs+1);
    }
}


int main(){

    long long A[21] = {0, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786, 208012, 742900, 2674440, 9694845, 35357670, 129644790, 477638700, 1767263190, 6564120420};
    while(SC(n)==1){
        // n *= 2;
        // //               lvl Ms Fs
        // long long ans = go('M', 1, 1, 0);
        // cout << ans << endl;
        cout << A[n] << endl;
    }

    return 0;
}