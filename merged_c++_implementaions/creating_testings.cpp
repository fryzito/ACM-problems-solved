#include <bits/stdc++.h>
#include <chrono>  // Necesaria para usar high_resolution_clock y duración
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

using namespace std;

char str[3*MAXN];
int main(){

    std::string cadena = "aeiouAEIOU";
    std::string aux = "";
    REP(i,100000){
        aux += 'u';
    }
    cout << aux.size() << endl;
    cout << aux << endl;
    aux = "";

    REP(i,100000){
        aux += 'U';
    }
    cout << aux.size() << endl;
    cout << aux << endl;
    aux = "";

     REP(i,100000){
        aux += 'A';
    }
    cout << aux.size() << endl;
    cout << aux << endl;

    return 0;
}



// int main() {
//     // Capturamos el tiempo de inicio
//     auto start = std::chrono::high_resolution_clock::now();

//     // Aquí va el código que deseas medir
//     // Ejemplo: un bucle que realiza un trabajo ficticio
//     for (int i = 0; i < 1000000; ++i) {
//         // Hacer algo (como sumar números)
//         int x = i * i;
//     }

//     // Capturamos el tiempo de fin
//     auto end = std::chrono::high_resolution_clock::now();

//     // Calculamos la duración entre el inicio y el fin en microsegundos
//     auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

//     // Imprimimos el tiempo en microsegundos
//     std::cout << "Tiempo transcurrido: " << duration.count() << " microsegundos." << std::endl;

//     return 0;
// }
