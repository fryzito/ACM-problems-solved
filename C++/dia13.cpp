#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int numerodiasmes(string mes,int anio){
	if(anio%400==0){
		if(mes=="febrero")
			return 29;
		else{
			if(mes=="enero"|| mes=="marzo"|| mes=="mayo"|| mes=="julio"||mes=="agosto"|| mes=="setiembre"|| mes=="octubre"|| mes=="diciembre")
				return 31;
			else{
				return 30;
			}
		}
	}
	else
	{
	if(mes=="febrero")
			return 28;
		else{
			if(mes=="enero"|| mes=="marzo"|| mes=="mayo"|| mes=="julio"||mes=="agosto"|| mes=="setiembre"|| mes=="octubre"|| mes=="diciembre")
				return 31;
			else{
				return 30;
			}
		}
	}
}
string dia13(string dia,string diasemana[])//int in,string dia,string mes,int anio)
{

	if(dia==diasemana[0]){
		return diasemana[5];
	}
	else{
		if(dia==diasemana[1]){
			return diasemana[6];
		}
		else{
			if(dia==diasemana[2]){
				return diasemana[0];
			}
			else{
				if(dia==diasemana[3]){
					return diasemana[1];
				}
				else{
					if(dia==diasemana[4]){
						return diasemana[2];
					}
					else{
						if(dia==diasemana[5]){
							return diasemana[3];
						}
						else{
							if(dia==diasemana[6]){
								return diasemana[4];
							}
							else{
								return "el dia ingresado no es válido...";
							}
						}
					}
				}
			}
		}
	}
}
int main()
{
	string lunes,martes,miercoles,jueves,viernes,sabado,domingo;
	int n;
	string diasemana[7];
	diasemana[0]="lunes"; diasemana[1]="martes"; diasemana[2]="miercoles"; diasemana[3]="jueves"; diasemana[4]="viernes";
	diasemana[5]="sabado"; diasemana[6]="domingo";
	/*for(int j=0;j<7;j++){
		cout<<"j: ";
		cin>>diasemana[j];
	}*/
	string dia,mes,trece;
	int anio,in;
	//cout<<"calculo del dia del 13 sabiendo el dia de inicio: "<<endl;
	//cin>>dia;
	cout<<"digite el mes: ";
	cin>>mes;
	//cout<<"digite el dia de inicio: ";
	//cin>>in;
	cout<<"digite el anio: ";
	cin>>anio;
	/*for(int i=0;i<7;i++){
		cout<<diasemana[i]<<endl;
	}*/
	trece=dia13(dia,diasemana);
	
		cout<<numerodiasmes(mes,anio)<<endl;
}
