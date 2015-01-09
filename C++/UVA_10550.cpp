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
#define SS(str)scanf("%[^\n]\n",str)
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
unsigned int nro1,nro2,nro3,nro4,inia,inib,inic,fina,finc,finb;
int main(){
  while(scanf("%u %u %u %u\n",&nro1,&nro2,&nro3,&nro4)==4,nro1||nro2||nro3||nro4){
    inia = nro1;
    inib = nro2;
    inic = nro3;
    fina = nro2;
    finb = nro3;
    finc = nro4;
    unsigned short rpta=0;
    if(inia<fina)rpta+=inia-fina +40;
    else  rpta+=inia-fina;
    // dbg3(inia,fina,rpta);

    if(inib<=finb) rpta+=finb-inib;
    else rpta+=(finb-inib)+40;
        // dbg3(inib,finb,rpta);

    if(inic<finc) rpta+=(inic-finc)+40;
    else rpta+=(inic-finc);
    // dbg3(inic,finc,rpta);
    rpta+=120;
    printf("%hu\n",rpta*9);
  }
  return 0;
}
