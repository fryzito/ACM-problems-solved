#include <cstdio>
#include <iostream>
#include <map>
#include <deque>
#include <utility>
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y) cout << #x << " = " << x << " " << #y << " = " << y << endl
#define mp make_pair
using namespace std;
int main() {
  int t, numb, numero, cases = 0;
  string str, str2;
  scanf("%d\n",&t);
  while(t) {
    cases++;
    map<int,int> mapa;
    map<int,int>::iterator it;
    int key = 0;
    for(int i=0; i<t; i++) {
      scanf("%d",&numb); key++;
      for(int j=0; j<numb; j++) {
	scanf("%d",&numero);
	mapa[numero] = key;
      }
    }
    printf("Scenario #%d\n",cases);
    deque<pair<int,int> > cola;
    deque<pair<int,int> >::iterator ite;
    cin >> str;
    while(str!="STOP") {
      if(str == "ENQUEUE") {
	scanf("%d\n",&numero);
	it = mapa.find(numero);
	int k;
	for(k=cola.size()-1; k>=0; k--)
	  if(cola[k].first == (*it).second) {
	    cola.insert(cola.begin()+(k+1),mp(mapa[numero],numero));
	    //dbg2(mapa[numero],numero);
	    break;
	  }
	if(k==-1)
	  cola.push_back(mp(mapa[numero],numero));
      } else {
	printf("%d\n",cola.front().second);
	cola.pop_front();
      }
      cin >> str;
    }
    printf("\n");
    scanf("%d\n",&t);
  }
  return 0;
}
