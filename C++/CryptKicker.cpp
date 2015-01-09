#include <cstdio>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
  int n; string aux;
  char word[16], line[81];
  scanf("%d\n",&n);
  vector<string> v;
  for(int i=0; i<n; i++) {
    gets(word);
    v.push_back(string(word));
  }
  while(gets(line)) {
    printf("%s\n",line);
    stringstream ss;
    ss << string(line);
    while(ss >> aux)
      printf("%s\n",aux.c_str());
  }
  for(int i=0; i<n; i++)
    printf("%s\n",v[i].c_str());
  return 0;
}
