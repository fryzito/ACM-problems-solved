//Find the fone problema del UVA  para asignar numeros a las 25 letras i darles un respectivo numero
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<sstream>
#define REP( i, a, b) for(int i = int(a); i < int(b); i++)
#define dbg(x) cout << #x << " = " << "\n";
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
using namespace std;
int number(string a[],char c){
	int i,j;
	REP(i,0,8){
		REP(j,0,a[i].size()){
			if(a[i][j]==c)
				return i+2;
		}
	}
}
int main(){
	string alpha[] = {"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
	string str;
	int i;
	while(getline(cin,str)){
		REP(i,0,str.size()){
			if(!isalpha(str[i]))
				cout << str[i];
			else{
				cout << number(alpha,str[i]);
			}
		}
		cout << endl;
	}
}
