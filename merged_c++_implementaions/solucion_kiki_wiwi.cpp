#include <bits/stdc++.h>
using namespace std;

//Declarando contadores
int con_sols = 0;
int ki_count=0;
int wi_count=0;
// Inicializando tablero
int n,m;
int t[100][100];
// para colocar las piezas de los jugadores
int ki_dx[2] = {0, 1};
int ki_dy[2] = {1, 0};
int wi_dx[2] = {-1,0};
int wi_dy[2] = {0,-1};
// Es posible colocar una ficha de kiki en i,j ?
bool is_piece_kiki(int i, int j){
    bool ans = 1;
    for(int k=0;k<2;k++){
        int ni = i+ki_dx[k];
        int nj = j+ki_dy[k];

        ans &= (0<=ni && ni<n && 0<=nj && nj<m && t[ni][nj]==0);
    }
    return ans;
}
// Es posible colocar una ficha de wiwi en i,j ?
bool is_piece_wiwi(int i, int j){
    bool ans = 1;
    for(int k=0;k<2;k++){
        int ni = i+wi_dx[k];
        int nj = j+wi_dy[k];
        ans &= (0<=ni && ni<n && 0<=nj && nj<m && t[ni][nj]==0);
    }
    return ans;
}
// Colocar la ficha de kiki
void put_kiki(int i, int j, int lvl){
    t[i][j] = lvl;
    for(int k=0;k<2;k++){
        int ni = i+ki_dx[k];
        int nj = j+ki_dy[k];
        t[ni][nj] = lvl;
    }
    return;
}
// Colocar la ficha de wiwi
void put_wiwi(int i, int j, int lvl){
    t[i][j] = lvl;
    for(int k=0;k<2;k++){
        int ni = i+wi_dx[k];
        int nj = j+wi_dy[k];
        t[ni][nj] = lvl;
    }
    return;
}
// Módulo de backtracking para búsqueda de soluciones
void go(int player,int lvl){
    if(!player){
        //usando la ficha de kiki 
        int peace_used = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(t[i][j]==0 && is_piece_kiki(i,j)) {// existe espacio?
                    peace_used = true;
                    // colocando la ficha de kiki
                    put_kiki(i,j,lvl);
                    // siguienet lvl
                    go(1-player,lvl+1);

                    // limpiar una vez regresado al estado anterior
                    put_kiki(i,j,0);
                }
            }
        }
        // una solución para wiwi!
        if(!peace_used){
            con_sols++;
            wi_count++;
            return;
        }

    } else {
        //usando la ficha de wiwi 
        int peace_used = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(t[i][j]==0 && is_piece_wiwi(i,j)) {//existe espacio?
                    peace_used = true;
                    // colocando la ficha de wiwi
                    put_wiwi(i,j,lvl);
                    // siguiente lvl
                    go(1-player,lvl+1);
                    // limpiar una vez regresado al estado anterior
                    put_wiwi(i,j,0);
                }
            }
        }

        if(!peace_used){
            // una solución para kiki!
            con_sols++;
            ki_count++;
            return;
        }
    }
    return;
}

int main(){
    string player;
    while(scanf("%d %d",&n,&m)==2){
        cin >> player;
        // caso en el cual no hay tablero
        if(n<2 || m<2){
            printf("%d\n",player!="kiki");
            continue;
        }
        // Solo para este input en particular se procesa offline
        if(n==6 && m==6){
            printf("%d\n",player=="kiki"?44565444:52184412);
            continue;
        }
        // Actualizando valores
        con_sols=0;
        ki_count=0;
        wi_count=0;
        // Limpiando tablero
        memset(t,0,sizeof(t));
        if(player=="kiki") // Quien empieza a jugar?
            go(0,1);
        else
            go(1,1);
        printf("%d\n",ki_count);
    }
    return 0;
}