#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main(){
    int R,C;
    
    scanf("%d %d",&R,&C);
    
    char M[R][C + 1];
    
    for(int i = 0;i < R;++i) scanf("%s",M[i]);
    
    int l[R][C],r[R][C],d[R][C],u[R][C];
    int l2[R][C],r2[R][C],d2[R][C],u2[R][C];
    
    for(int i = 0;i < R;++i){
        for(int j = 0;j < C;++j){
            l[i][j] = j - 1;
            r[i][j] = j + 1;
            
            u[i][j] = i - 1;
            d[i][j] = i + 1;
        }
    }
    
    for(int i = 0;i < R;++i){
        for(int j = 0;j < C;++j){
            if(M[i][j] == '.'){
                int x1 = l[i][j];
                int x2 = r[i][j];
                
                if(x1 != -1) r[i][x1] = x2;
                if(x2 != C) l[i][x2] = x1;
                
                int y1 = u[i][j];
                int y2 = d[i][j];
                
                if(y1 != -1) d[y1][j] = y2;
                if(y2 != R) u[y2][j] = y1;
            }
        }
    }
    
    int best = 0,cont = 0;
    
    for(int i = 0;i < R;++i){
        for(int j = 0;j < C;++j){
            if(M[i][j] != '.'){
                for(int a = 0;a < R;++a){
                    for(int b = 0;b < C;++b){
                        l2[a][b] = l[a][b];
                        r2[a][b] = r[a][b];
                        
                        u2[a][b] = u[a][b];
                        d2[a][b] = d[a][b];
                    }
                }
                
                int aux = 0,x = i,y = j;
                
                while(x >= 0 && x < R && y >= 0 && y < C){
                    int y1 = u2[x][y];
                    int y2 = d2[x][y];
                    
                    if(y1 != -1) d2[y1][y] = y2;
                    if(y2 != R) u2[y2][y] = y1;
                    
                    int x1 = l2[x][y];
                    int x2 = r2[x][y];
                    
                    if(x1 != -1) r2[x][x1] = x2;
                    if(x2 != C) l2[x][x2] = x1;
                                        
                    if(M[x][y] == 'L') y = x1;
                    else if(M[x][y] == 'R') y = x2;
                    else if(M[x][y] == 'U') x = y1;
                    else x = y2;
                    
                    ++aux;
                }
                
                if(aux > best) best = aux,cont = 1;
                else if(aux == best) ++cont;
            }
        }
    }
    
    printf("%d %d\n",best,cont);
    
    return 0;
}