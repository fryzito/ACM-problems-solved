//@uthor : btc
//http://livearchive.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3139

#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>
 
#define inf (1 << 30)
 
using namespace std;
 
int main(){
        //freopen("a.in", "r", stdin);
        int n, noCase = 1;
        while(scanf("%d", &n) && n != 0){
                vector < pair < int, int> > P(n);
                for(int i=0; i<n; i++)
                        scanf("%d%d", &P[i].first, &P[i].second);
               
                double D, Dmin = inf, Dmax = 0;
                for(int i=0; i<n; i++){
                        for(int j=i+1; j<n; j++){
                                //crear recta
                                int x1 = P[i].first, y1 = P[i].second, x2 = P[j].first, y2 = P[j].second;
                                int tipoRecta = 0;
                                double m = 0, b;
                                if(x1 == x2){
                                        tipoRecta = 1;
                                        b = x1;
                                }else if(y1 == y2){
                                        tipoRecta = 2;
                                        b = y1;
                                }else{
                                        tipoRecta = 3;
                                        m = (y1-y2) * 1.0 / (x1-x2);
                                        b = y1 - m * x1;
                                }
                                //ver que todos los puntos esten debajo o encima de la recta
                                int up = 0, zeros = 0;       
                                //calcular maxima distancia
                                D = 0;
                                for(int k=0; k<n; ++k){
                                        if(k == i || k == j) continue;
                                        if(tipoRecta == 1){
                                                Dmax = P[k].first - x1;
                                        }else if(tipoRecta == 2){
                                                Dmax = P[k].second - y1;
                                        }else Dmax = (m * P[k].first - P[k].second + b) / sqrt(m*m + 1);
                                        if(abs(Dmax) <= 1E-8) zeros ++;
                                        else up += (Dmax > 0);
                                        //distancia punto en Dmax
                                        D = max(D, abs(Dmax));
                                }
                               
                                if(up == n - 2 - zeros || up == 0)      Dmin = min(Dmin, D);
                        }
                }
                Dmin *= 100;
                Dmin = ceil(Dmin);
                printf("Case %d: %.2lf\n", noCase++, Dmin/100);
        }
        return 0;
}

