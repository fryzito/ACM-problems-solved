#include <map>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
map<char,char> mapa;
void initmapa() {
  mapa['A'] = mapa['B'] = mapa['C'] = '2';
  mapa['D'] = mapa['E'] = mapa['F'] = '3';
  mapa['G'] = mapa['H'] = mapa['I'] = '4';
  mapa['J'] = mapa['K'] = mapa['L'] = '5';
  mapa['M'] = mapa['N'] = mapa['O'] = '6';
  mapa['P'] = mapa['R'] = mapa['S'] = '7';
  mapa['T'] = mapa['U'] = mapa['V'] = '8';
  mapa['W'] = mapa['X'] = mapa['Y'] = '9';
}
int main() {
  initmapa();
  int n, m; string str;
  scanf("%d\n",&n);
  while(n--) {
    scanf("\n");
    scanf("%d\n",&m);
    map<string,int> contador;
    map<string,int>::iterator it;
    for(int j=0; j<m; j++) {
      getline(cin,str);
      for(int k=0; k<str.size(); k++) {
	if(isalpha(str[k])) {
	  str[k] = mapa[str[k]];
	} else {
	  if(str[k]=='-') {
	    str.erase(k,1);
	    k--;
	  }
	}
      }
      str.insert(3,1,'-');
      if(contador.find(str)==contador.end()) {
	contador[str] = 1;

      } else {
	contador[str]++;
      }
      //cout << str << endl;
    }
    bool first = true;
    for(it = contador.begin(); it!=contador.end(); it++) {
      if((*it).second > 1) {
	first = false;
	cout << (*it).first << " " << (*it).second << endl;
      }
    }
    if(first) cout << "No duplicates." << endl;
    if(n) cout << endl;
  }
  return 0;
}
