/*
ID: wildr.11
LANG: C++
TASK: ride
*/
#include <cstdio>
#include <iostream>

using namespace std;
 int busquedabin(string biblioteca,int principio,int fin,char elemento){
	int res;
    if(principio < fin){
        int m = (principio + fin)/2;
        if(elemento< biblioteca[m]) res = busquedabin(biblioteca, principio, m, elemento);
        else if(elemento> biblioteca[m]) res = busquedabin(biblioteca, m+1, fin, elemento);
        else 
		return res = m;
    }else res =0;
    return res;
	
}
int main()
{
	freopen("ride.in", "r", stdin);
	freopen("ride.out", "w", stdout);
	int extractor;
	string cometa,grupo;
	int acumulador1=1, acumulador=1;
	string biblioteca= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";	
	cin >> cometa;	
	cin >> grupo;
	if(((cometa.size())<7) &&(grupo.size() <7)){	
	for(int i=0;i<cometa.size();i++)
	{
		extractor=busquedabin(biblioteca,0,26,cometa[i])+1;
		acumulador=acumulador*extractor;
	}
	
	// -----------------
	for(int i=0;i<grupo.size();i++)
	{
		extractor=busquedabin(biblioteca,0,26,grupo[i])+1;
		acumulador1=acumulador1*extractor;
	}
	if((acumulador % 47) ==(acumulador1 % 47))
               cout << "GO\n";
       else
               cout << "STAY\n";
	}
}
