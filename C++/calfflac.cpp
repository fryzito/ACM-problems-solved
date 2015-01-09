/*
ID: fryzito
LANG: C++
TASK: calfflac
*/
#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>
#include <cstring>
#include <map>
#define pb push_back
#define mp make_pair
#define MAXN 2000
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y) cout << #x << " = " << x << " "<< #y << " = " << y << endl;
using namespace std;

string str,str1;
vector<pair<char,int> > vp2;
int a = 0, b = 0;

void Buscar(int ini, int fin) {
	int aux1=0, aux2=0;
	while(ini >= 0 && fin < vp2.size() && vp2[ini].first == vp2[fin].first) {
		aux1 = ini;
		aux2 = fin;
		ini--; fin++;
	}
	if (aux2 - aux1 > b-a) {
		a = aux1;
		b = aux2;
	}
	return;
}

int main() {
	xfreopen("calfflac.in" , "r" , stdin);
	freopen("calfflac.out" , "w" , stdout);
	while(getline(cin,str1)){
		str += str1;
		str += '\n';
	}
	for(int i = 0; i < str.length(); i++) {
		if(isalpha(str[i]))
			if(!isupper(str[i]))
				vp2.pb(mp(toupper(str[i]),i));
			else
				vp2.pb(mp(str[i],i));
	}
	
	//for(int i = 0; i < vp2.size(); i++) cout << vp2[i].first << " " << vp2[i].second << endl;
	
	for(int i = 1; i < str.size(); i++) {
		if(vp2[i].first == vp2[i-1].first)
			Buscar(i-1,i);
	}
	
	for(int i = 2; i < str.size(); i++) {
		if(vp2[i-2].first == vp2[i].first)
			Buscar(i-2,i);
	}
	cout << b-a+1 << endl;
	int cont = 0;
	for (int i = vp2[a].second; i <= vp2[b].second; i++) {
		cout << str[i];
	}
	cout << endl;
	return 0;
}
