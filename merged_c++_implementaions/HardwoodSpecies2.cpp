#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#define REP(tc,T) for(int tc=0; tc<T; tc++)
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  int T, tot;
  string word;
  cin >> T;
  getline(cin, word);
  getline(cin, word);
  REP(tc, T) {
    map < string, int > mapa;
    tot = 0;
    while (getline(cin, word) && word.length() >= 1) {
      mapa[word]++;
      tot++;
    }
    if (tc != 0) cout << "\n";
    cout << setprecision(4) << fixed;
    for (map <string, int>::iterator it = mapa.begin(); it != mapa.end(); it++) {
      cout << (*it).first << " " << ((*it).second)*100.0/tot << "\n";
    }
  }
  return 0;
}
