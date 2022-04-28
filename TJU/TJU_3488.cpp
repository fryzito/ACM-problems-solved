#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;
int main(){
	int nc,n,nro;scanf("%d\n",&nc);
	while(nc--){
		scanf("%d\n",&n);
		priority_queue<int> cola;
		for(int i=0;i<n;i++){
			scanf("%d",&nro);
			cola.push(-nro);
		}
		int sum=0,aux,aux2;
		while(cola.size()>1){
			aux=cola.top();
			cola.pop();
			aux2=cola.top();
			cola.pop();
			sum+=(aux+aux2);
			cola.push(aux+aux2);
		}
		printf("%d\n",-sum);
	}
	return 0;
}