#include <cstdio>
using namespace std;
int main() {
  long int n, p;
  bool stand = true;
  while(scanf("%ld",&n) == 1) {
    p = 1;
    stand = false;
    while(p < n) {
      if(stand) {
	p *= 2;
	stand = false;
      } else {
	p *= 9;
	stand = true;
      }
    }
    if(stand)
      printf("Stan wins.\n");
    else
      printf("Ollie wins.\n");
  }
  return 0;
}
