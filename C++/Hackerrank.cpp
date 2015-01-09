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
#define EPS (1e-8)
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
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MOD 100007
#define MAXN 100005
#define Vector point
using namespace std;
struct point{
  double x,y;
  point(){}
  point(double a,double b){x=a;y=b;}
};
point operator -(point a,point b) {return point(a.x-b.x,a.y-b.y);}
double cross(Vector A,Vector B) {return A.x*B.y - A.y*B.x;}
double area(point A,point B,point C) {return cross(B-A,C-A);}
bool onSegment(point A,point B,point P){
  return abs(area(A,B,P))<EPS && 
    P.x >= min(A.x,B.x) && P.x <= max(A.x,B.x) &&
    P.y >= min(A.y,B.y) && P.y <= max(A.y,B.y);
}
bool intersect (point p1,point p2,point p3,point p4){
  double A1=area(p2,p4,p1);
  double A2=area(p3,p4,p2);
  double A3=area(p1,p2,p3);
  double A4=area(p1,p2,p4);
  //onsegment and area
  if(((A1>0&&A2<0)||(A1<0&&A2>0)) && ((A3>0&&A4<0)||(A3<0&&A4>0)))
    return true;
  else if(A1==0 && onSegment(p3,p4,p1)) return 1;
  else if(A2==0 && onSegment(p3,p4,p2)) return 1;
  else if(A3==0 && onSegment(p1,p2,p3)) return 1;
  else if(A4==0 && onSegment(p1,p2,p4)) return 1;
  else return 0;
}
int n;
point A,B,P;
int main(){
  S(n);
  point I(0,0);
  while(n--){
    scanf("%lf %lf %lf %lf %lf %lf\n",&A.x,&A.y,&B.x,&B.y,&P.x,&P.y);
    if(intersect(I,P,A,B))
      printf("NO\n");
    else
      printf("YES\n");
  }
  return 0;
}
