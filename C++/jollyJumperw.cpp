#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main(){
        int n;
        int A[3000];
         while(cin>>n){
          // leer los datos arreglo
           for( int i=0;i<n;i++) cin>>A[i];
          // creamos y tachamos el arreglo paralelo q tna abs <n
           int B[3000]={0};          
           for(int i=1;i<n;i++){
             int X=abs(A[i]-A[i-1]);
             if(X<n){
               B[X]=1;
             }
          }
          //verificamos q haya x lo menos 1 q no cumpla la condicion
          bool f=1; 
          for(int j=1;j<n;j++){
            if(B[j]==0)
               f=0;   
           } 
           // mostrar
          if(f){
                cout<<"Jolly"<<endl; 
                }
         else{
                cout<<"Not jolly"<<endl;
         }
    }
}

