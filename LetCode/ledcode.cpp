#include<cstdio>
#include<iostream>

using namespace std;

char valordigito(string cadena)
{
	string lista = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
	
	for (int I=0; I<cadena.length();I++)
	{
		//int valor =-1;
		for(int k=0;k<lista.length();k++)
		{
			//valor= valor + 1;
			if(cadena[I]==lista[k])
			{
					return lista[k];
			}
		}
	}
}

int main()
{
	string A[27];
	A[0]="123457";  A[1]="1234567"; A[2]="456"; A[3]="1850"; A[4]="12456";
	A[5]="1240"; 	A[6]="12569";   A[7]="1213457";A[8]="37";A[9]="3567";
	A[10]="13459";  A[11]="156";    A[12]="12357";A[13]="3579";A[14]="123567";
	A[15]="1458"; A[16]="12347";    A[17]="123459";A[18]="12467";A[19]="287";
	A[20]="13567";A[21]="1379"; 	A[22]="135790";A[23]="90";A[24]="1347";
	A[25]="23456";
	int n;
	cout<<"introduzca el numero de cadenas: ";
	cin>>n;	
	string  lista[3];
	int indizador=0;
	for(int j=0;j<n;j++)
	{
		/*string captor;
		 ingresar el valor de las palabras */
		/*for(int i=0;i<27;i++){
				
				cout<<i<<" : ";
				cin>>captor;
				diccionario[i]=captor;
		}	*/
		string cadena;
		cin>>cadena;
		int m=0;
		for(int p=0;p<cadena.length();p++){
			if((cadena[p]>65)||(cadena[p]<90)){
				lista[indizador]=cadena[p];
			}
			else
			{
				
						lista[indizador]= valordigito(A[p]);
						//}
					
				}
			}
		}
		
	}
	/* mostar lista */
	
	for(int i=0;i<3;i++)
	{
		//if(lista[i]=" ")
		cout<<lista[i]<<endl;
	}
	
}
