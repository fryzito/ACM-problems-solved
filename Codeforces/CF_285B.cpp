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
#define MAXN 100
using namespace std;
int n;
char str[MAXN],str2[MAXN];
string s1,s2;
int buscarid(string str,vector<pair<string,string> > v){
    REP(i,v.size()){
        if(str==v[i].s)
            return i;
    }
    return -1;
}

int main(){
    S(n);
    vector<pair<string,string> >v;
    set<string> st;
    REP(i,n){
		scanf("%s %[^\n]\n",str,str2);
		s1=(string)str;
		s2=(string)str2;
		if(st.find(s1)==st.end()){
		    v.pb(mp(s1,s2));
		    st.insert(s2);
		} else {
		    int id = buscarid(s1,v);
		    v[id].s=s2;
		    st.insert(s2);
		}
	}
	P((int)v.size());
	REP(i,v.size()){
	    printf("%s %s\n",v[i].f.c_str(),v[i].s.c_str());
	}
    return 0;
}
