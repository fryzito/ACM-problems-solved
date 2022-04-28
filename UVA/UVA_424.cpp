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
#define MAXN 5003
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int stringToNum(char *entrada,int num[MAXN]){
  int i,j,k,tam;
  int ndig;
  tam = strlen(entrada);
  ndig=0;
  REPR(i,tam-1,0){
    num[ndig]=0;
    k=1;
    for(j=0;j<4&&i>=0;j++,i--){
      num[ndig]=num[ndig]+k*(entrada[i]-'0');
      k*= 10;
    }
    i++;
    ndig++;
  }
  while(ndig>=1&&num[ndig-1]==0){
    ndig--;
  }
  if(ndig==0){
    num[0]=0;
    ndig=1;
  }
  return ndig;
}
int suma2(int a[MAXN],int tama,int b[MAXN],int tamb){
  int i,j,cont=0,tamc;
  for(i=0;i<tama&&i<tamb;i++){
    a[i]=a[i]+b[i]+cont;
    cont=a[i]/10000;
    a[i]=a[i]%10000;
  }
  while(i<tama){
    a[i]=a[i]+cont;
    cont=a[i]/10000;
    a[i]=a[i]%10000;    
    i++;
  }
  while(i<tamb){
    a[i]=b[i]+cont;
    cont=a[i]/10000;
    a[i]=a[i]%10000;    
    i++;
  }
  if(cont)
    a[i++]=cont;
  tamc=i;
  return tamc;
}
void imprime(int a[MAXN],int tam){
  int i=tam-1;
  printf("%d",a[i]);
  for(i--;i>=0;i--){
    printf("%04d",a[i]);
  }
  return;
}
int main(){
  char str[MAXN];
  int A[MAXN];CLR(A,0);
  int B[MAXN];CLR(B,0);
  SS(str);
  if(strlen(str)==1&&str[0]=='0') {printf("0\n");return 0;}
  int sza=stringToNum(str,A);
  int szb;
  while(true){
    SS(str);
    if(strlen(str)==1&&str[0]=='0') break;
    szb=stringToNum(str,B);
    // imprime(A,sza);    
    // putchar('\n');
    // putchar('\n');
    sza=suma2(A,sza,B,szb);
  }
  imprime(A,sza);
  putchar('\n');
  return 0;
}
