#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int nc;scanf("%d\n",&nc);
	int a,f;
	int aux1=nc;
	while(nc--){
		if(nc!=aux1-1) printf("\n");
		scanf("\n");
		scanf("%d\n",&a);
		scanf("%d\n",&f);
		int nro;
		int aux=f;
		while(f--){
			for(int i=1;i<=a;i++){
				nro=i;
				for(int j=1;j<=i;j++){
					printf("%d",nro);
				}
				printf("\n");
			}
			for(int i=a-1;i>=1;i--){
				nro=i;
				for(int j=1;j<=i;j++){
					printf("%d",nro);
				}
				printf("\n");
			}
			if(f!=0) printf("\n");
		}
	}
	return 0;
}
