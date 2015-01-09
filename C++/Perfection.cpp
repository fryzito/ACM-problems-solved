#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y) cout << #x << " = " << x << " " << #y << " = " << y << endl
using namespace std;
int main() {
  int numero;
  printf("PERFECTION OUTPUT\n");
  cin >> numero;
  while(numero){
       map<int,int> mapa;
       int j=2, k = numero;
       while(k != 1) {
  	 if(k%j==0) {
	   if(mapa.find(j)==mapa.end()) {
	     mapa[j]=1;
	     k=k/j;
	   }
	   else {
	     mapa[j]++;
	     k = k/j;
	   }	  
	 }
	 else
	   j++;
       }
       int SD = 1;
       for(map<int,int>::iterator it=mapa.begin();it!=mapa.end();it++) {
	 //dbg2((*it).first,(*it).second);
 	 SD *= (pow((*it).first,(*it).second+1) - 1) / ((*it).first -1);
       }
       //dbg(SD-numero);
       if(numero == SD-numero)
	 printf("%5d  PERFECT\n",numero);
       else if(numero < SD-numero) {
	 printf("%5d  ABUNDANT\n",numero);
       }
       else
	 printf("%5d  DEFICIENT\n",numero);
   cin >> numero;
  }
  printf("END OF OUTPUT\n");
  return 0;
}
