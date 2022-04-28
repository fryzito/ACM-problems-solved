#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#define pb push_back
#define mp make_pair

#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a,b,sizeof(a))
#define REPN(x,a,b) for (int x=a; x<b;++x)
#define REP(x,b) REPN(x, 0, b)
using namespace std;
int main() {
       int n;
       cin >> n;
       int t[4], x;
       CLR(t, 0);
       REP(i, n) {
               cin >> x;
               t[x-1]++;
       }
       
       int res = t[3];
       res += t[1]/2;
       t[1] = t[1] % 2;
       int q = min(t[2], t[0]);
       res += q;
       t[2] -= q;
       t[0] -= q;
       res += t[2];
       if (t[1]) {
               res++;
               t[0] -= 2;
       }
       if (t[0] >= 1) res += (t[0]+3)/4;
       cout << res << endl;
       
       return 0;
}

