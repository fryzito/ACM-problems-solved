//problema del UVA 10082 escribir el digito de costado n el teclado
#include<cstdio>
#include<iostream>
#include<sstream>
#include<algorithm>
#define REP(i, a, b) for(int i = int(a); i < int(b); i++)
#define dbg(x) cout << #x << " = " << "\n";
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
using namespace std;
char buscar(char anum[],char A1[],char A2[],char A3[],char x){
	int i;
	REP(i,1,13){
		if(x==anum[i]){
			return anum[i-1];
		}
	}
	REP(i,1,13){
		if(x==A1[i]){
			return A1[i-1];
		}
	}
	REP(i,1,11){
		if(x==A2[i]){
			return A2[i-1];
		}
	}
	REP(i,1,10){
		if(x==A3[i]){
			return A3[i-1];
		}
	}
	return ' ';
}
int main(){
	char anum[] = {'`','1','2','3','4','5','6','7','8','9','0','-','='};
	char A1[] = {'Q','W','E','R','T','Y','U','I','O','P','[',']','\\'};
	char A2[] = {'A','S','D','F','G','H','J','K','L',';','\''};
	char A3[] = {'Z','X','C','V','B','N','M',',','.','/'};
	string str;
	int i;
	while(getline(cin,str)){
		REP(i,0,str.size()){
			cout<<buscar(anum,A1,A2,A3,str[i]);
		}
			cout << endl;
	}	
}
