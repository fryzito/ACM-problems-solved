#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;
int din[1001][1001];
char word[1002];

int solve( int pizq, int pder ){
   int res = 0;
   if( pizq == pder ) return 1;
   if( pizq > pder ) return 0;
   if( din[pizq][pder] != -1) return din[pizq][pder];
   if( word[ pizq ] == word[ pder ]) res = max( res, solve( pizq + 1, pder -1 ) + 2);
   res = max( res, solve( pizq , pder - 1) );
   res = max( res, solve( pizq + 1, pder ) );
   return din[pizq][pder] = res;
}

main(){
  int ncases, cases;
  for( gets(word), sscanf(word, "%d", &ncases), cases = 1; cases <= ncases ; cases++ ){
    gets( word );
    memset(din,-1,sizeof din);
   printf("%d\n", solve( 0 , strlen(word)-1));
  }
  return 0;     
}

