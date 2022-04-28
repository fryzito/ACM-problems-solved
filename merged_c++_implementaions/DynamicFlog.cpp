//@uthor : btc
//http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2098
 
#include <iostream>
#include <cstdio>
#include <vector>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
 
int main(){
        int nc, condiciones, longCamino;
        scanf("%d", &nc);
        getchar();
        for(int ic=1; ic<=nc; ++ic){
                scanf("%d %d", &condiciones, &longCamino);
                getchar();
                vector < vector < int > > camino;
                char tipo;
                int distancia;
                vector < int > tmp;
                tmp.push_back(0);
                if(condiciones > 0){
                        tipo = getchar();
                        getchar();
                        scanf("%d", &distancia);
                        //dbg(distancia);
                        tmp.push_back(distancia);
                        if(tipo == 'B'){
                                camino.push_back(tmp);
                                tmp = vector < int > (0);
                                tmp.push_back(distancia);
                        }
                        condiciones--;
                        while(condiciones > 0){
                                getchar();
                                tipo = getchar();
                                getchar();
                                scanf("%d",&distancia);
                                tmp.push_back(distancia);
                                if(tipo == 'B'){
                                        camino.push_back(tmp);
                                        tmp = vector < int > (0);
                                        tmp.push_back(distancia);
                                }
                                condiciones--;
                        }
                        getchar();
                }
                tmp.push_back(longCamino);
                camino.push_back(tmp);
                
                /*Escribiendo matriz
                for(int i = 0; i < camino.size(); i++){
                	for(int j = 0; j < camino[i].size(); j++) {
                		printf("%d ",camino[i][j]);
                	}
                	printf("\n");
                }*/
                
                int maxSalto = 0;
                for(int i=0; i<camino.size(); ++i){
                        int last = camino[i][0];
                        for(int k=1; k < camino[i].size(); k+=2){
                                maxSalto = max(maxSalto, camino[i][k] - last);
                                //dbg(maxSalto);
                                last = camino[i][k];
                        }
                        maxSalto = max(maxSalto, camino[i][camino[i].size()-1] - last);
                        last = camino[i][0];
                        for(int k=2; k < camino[i].size(); k+=2){
                                maxSalto = max(maxSalto, camino[i][k] - last);
                                //dbg(maxSalto);
                                last = camino[i][k];
                        }
                        maxSalto = max(maxSalto, camino[i][camino[i].size()-1] - last);
                }
                printf("Case %d: %d\n",ic, maxSalto);
        }
}

