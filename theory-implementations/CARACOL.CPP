#include <iostream.h>
#include <conio.h>

void main(){
int paso=1,cont=1;
int a[50][50];
int grado;
cout<<"Inserte el grado de la matriz caracol a generar: ";
cin>>grado;
for(int k=0;k<grado;k++)
for(int j=0;j<grado;j++)a[k][j]=0;
/*
Se tiene que inicializar la matriz en 0
Paso 1: Hacia la derecha
Paso 2: Hacia abajo
Paso 3: Hacia la izquierda
Paso 4: Hacia arriba
*/
    for(int i=0;i<grado;i++){

	    if(paso==1){
			for(int j=0;j<grado;j++){
				       if(a[i][j] == 0)
				       a[i][j]=cont++;
			 }//Fin del for
					     }//Fin del paso 1
	    paso++;


	     if(paso==2){
		       for(int j=0;j<grado;j++){
			       if(a[j][grado-(i+1)]==0)
			       a[j][grado-(i+1)]=cont++;
			       }//fin del for
				      }//fin del paso 2

	     paso++;
	     if(paso==3){
			  for(int j=grado-1;j>=0;j--){
				 if(a[grado-(i+1)][j] == 0)
				 a[grado-(i+1)][j]=cont++;
				 }//fin del for
				 }//fin del paso 3
		paso++;

		if(paso==4){
			    for(int j=grado-1;j>=0;j--){
				    if(a[j][i] == 0)
				    a[j][i]=cont++;
				    }//fin del for
				    }//fin del paso 4
		paso=1;


     }
 for(int ii=0;ii<grado;ii++){
	for(int j=0;j<grado;j++){
	if(a[ii][j]<10)cout<<"0"; cout<<a[ii][j]<<"  ";
	}
		cout<<endl;}
 getch();
 }
