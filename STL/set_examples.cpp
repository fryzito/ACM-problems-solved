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
#define ARRAY_SIZE(A) sizeof(A)/sizeof(A[0])
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 100005
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}

int main(){
    
    int A[10] = {1,12,3,4,5,5,13,715,8,9};
    set<int> S;

    for(auto val: A){
        cout << val << endl;
        if(S.find(val)==S.end()){
            // don´t found on set
            // insert new element
            S.insert(val);
        } else {
            cout << val <<" exist on set" << endl;
        }
    }

    cout <<" elements in set are sorted"<< endl;
    for(auto val:S){
        cout << val << endl;
    }

    // delete element on a set.
    // S.erase(it);
    // S.erase(val);

    vector<int> aux(128);
    cout << aux[0] <<endl;
    cout << aux.size() <<endl;

    return 0;

}