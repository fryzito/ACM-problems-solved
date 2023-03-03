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
int dist[MAXN];

vector<int> dijkstra ( vector < vector <ii>> g , int s , int V ){
    priority_queue< pair <int ,int >, vector< pair <int ,int >>, greater< pair<int ,int >>> pq;
    vector<int> dist (V , INF);
    pq.push( make_pair (0 , s)); dist[s] = 0;
    while ( !pq.empty() ){
        pair <int ,int > p = pq.top(); pq.pop ();
        if( dist[p.second ] < p.first ) continue ;

        int a = p. second ;
        for ( auto it = g[a].begin(); it != g[a].end(); it ++){
            int b = it->second, w = it->first ;
            if( dist[a] + w < dist[b]){
                dist[b] = dist[a] + w;
                pq.push( make_pair( dist[b] , b ));
            }
        }
    }
    return dist ;
}

int main(){
    int ini, to, w, nodoini;
	cin >> n;
	//dbg(n);
	// vector<pair <int,int> > lista[n];
    vector<vector <ii>> lista(n, vector<ii>());
    //dbg(lista.size());
	cin >> nodoini;
	//dbg(nodoini);
	while (cin >> ini,cin >> to,cin >> w) {
		lista[ini].push_back(make_pair(w,to));
		//lista[to].push_back(make_pair(w,ini));
	}
	
	vector <int> ans = dijkstra(lista,nodoini,n);
	
	// for(int i = 0; i<n;i++) {
    //     cout << "i=" << i <<", ";
	// 	for(int j = 0; j<lista[i].size();j++)
	// 		cout << lista[i][j].second << " ";
	// 	cout << endl;
	// }
	for (int i = 0; i < n; i++) {
		printf("El nodo %d esta a una distance %d de %d \n",i,ans[i],nodoini);
	}
  
  return 0;
}
