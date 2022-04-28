//ejemplo de como utilizar strtok para el split existen varias formas de hacer esto.
// strings and c-strings
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
string i2s(int x){stringstream ss; ss<<x; return ss.str(); }

int main (){
  char * cstr, *p;
  string str ("Please split this phrase into tokens");
  cstr = new char [str.size()+1];
  strcpy (cstr, str.c_str());
  // cstr now contains a c-string copy of str
  p=strtok (cstr," ");
  while (p!=NULL){
    cout << p << endl;
    p=strtok(NULL," ");
  }
  delete[] cstr;  
  return 0;
}
