//Dividir en Tokens 
#include <iostream> 
using std::cout; 
using std::endl; 
#include <cstring> 
int main() 
{ 
  char frase[]="Me van a dividir jojo jojo ji"; 
  char *ptr; 
  cout << "LA FRASE ANTES: " << frase << endl; 
  ptr = strtok(frase," ");//argumentos: frase, caracter delimitador 
  while(ptr != NULL) 
    { 
      cout << ptr << endl; 
      ptr = strtok(NULL, " "); 
    } 
  cout << "LA FRASE DESPUES: " << frase << endl; 
  return 0; 
  
}
