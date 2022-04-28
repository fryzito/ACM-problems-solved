#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#define dbg(x) cout << #x << " = " << x << endl
using namespace std;
string str;
int main() {
  //ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  //dbg(n);
  getline(cin,str);
  getline(cin,str);
  while(n--) {
    //dbg(n);
    map<string,int> mapa; int sum = 0;
    map<string,int>::iterator it;
    while(getline(cin,str)&&str.size()>0) {
      //dbg(str.size());
      if(mapa.find(str) != mapa.end()) {
	mapa[str]++;
      } else {
	mapa[str] = 1;
      }
      sum++;
    }
    for(it = mapa.begin(); it != mapa.end(); it++) {
      printf("%s %.4f\n",(*it).first.c_str(),(*it).second*100.0/sum);
    }
    if(n) cout << endl;
  }
  return 0;
}
