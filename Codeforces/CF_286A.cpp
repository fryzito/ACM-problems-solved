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
#define MAXN 1003
using namespace std;
char str[MAXN];
bool ispalindrome(string cad){
    int m=cad.size();
    int size=m;
    m >>= 1;
    REP(i,m){
        if(cad[i]!=cad[size-(i+1)])
            return false;
    }
    return true;
}
int main(){
    SS(str);
    int n=strlen(str);
    bool goal=0;
    string s1=(string)str;
    for(char i= 'a';i<='z';i++){
        for(int j=0;j<=n;j++){
            string aux=""; aux+=i;
            s1.insert(j,aux);
            //dbg(s1);
            if(ispalindrome(s1)){
                goal=1;
                printf("%s\n",s1.c_str());
                i='z';
                break;
            }
            s1.erase(j,1);
        }
    }
    if(!goal){
        printf("NA\n");
    }
    return 0;
}
