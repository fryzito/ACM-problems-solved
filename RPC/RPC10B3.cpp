#include <bits/stdc++.h>
using namespace std;
bool condicion(pair<string,int> a, pair<string,int> b){
  return int(a.second)>int(b.second);
}
double roundx(double x) { return floor(x * 100 + 0.5) / 100; }
int main(){
  int cant_candi, votos;
  cin >> cant_candi >> votos;
  vector<pair<string,double> > candidatos(cant_candi+1);
  string a, voto;
  for (int i = 0; i < cant_candi; ++i){
    cin >> a;
    candidatos[i].first=a;
    candidatos[i].second=0;
  }
  candidatos[cant_candi].second=0;
  candidatos[cant_candi].first = "Invalid";
  for (int i = 0; i < votos; ++i){
    cin >> voto;
    int cont=0, posicion = -1;
    bool posible = true;
    for (int j = 0; j < voto.size() && posible; ++j){
      if(voto[j]=='X'){
	cont++;
	posicion = j;
      }
      if(cont>1)posible = false;
    }
    if(posible && posicion!=-1) candidatos[posicion].second++;
    else candidatos[cant_candi].second++;
  }
  stable_sort(candidatos.begin(), candidatos.end()-1,condicion);
  /*
    for (int i = 0; i < candidatos.size(); ++i){
    cout << candidatos[i].second << endl;
    candidatos[i].second = redondear(candidatos[i].second*100/(votos*1.0));
    }
  */
  //sort(candidatos.begin(), candidatos.end()-1,condicion);
  for (int i = 0; i < candidatos.size(); ++i){
    cout << candidatos[i].first << " ";
    printf("Invalid %.2f%%\n",roundx(100.0*((double)candidatos[i].second/(double)votos)));
  }
  return 0;
}
