#include <cstdio>
using namespace std;
bool verificar(int a , int b, int c) {
  if((a<b+c) && (b<a+c) && (c<a+b))
    return true;
  else
    return false;
}
bool verificar2(int a , int b, int c) {
  if(a+b==c) return true;
  if(b+c==a) return true;
  if(a+c==b) return true;
  return false;
}
int main() {

  int v[4];
  for(int i=0; i<4; i++) {
    scanf("%d",v+i);
  }
  bool triangle=false;
  bool segment=false;
  for(int i=0; i<4; i++) {
    if(verificar(v[i%4],v[(i+1)%4],v[(i+2)%4])) {
      triangle = true;
      break;
    }
  }

  for(int i=0; i<4; i++) {
    if(verificar2(v[i%4],v[(i+1)%4],v[(i+2)%4])) {
      segment = true;
      break;
    }   
  }

  if(triangle )
    printf("TRIANGLE\n");
  else if(segment)
    printf("SEGMENT\n");
  else
    printf("IMPOSSIBLE\n");      
  
  return 0;
}
