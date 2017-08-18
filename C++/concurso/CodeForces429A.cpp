#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <cstring>
using namespace std;
#define MAXN 1000
#define vi vector<int>
//int bb(int e,int d, vi v, int x){
  //  return 0;
//}

int main(){
    int n,m;
    char str[MAXN];
    scanf("%d %d/n",&n,&m);
    scanf("%s",str);
    int sz = strlen(str);
    //cout << sz << endl;
    map<char,int> mapa;
    for(int i=0;i<sz;i++){
        mapa[str[i]]++;
    }
    map<char,int>::iterator it;
    bool goal=0;
    for(it=mapa.begin();it!=mapa.end();it++){
        if((*it).second>m){
            goal=1;
        }
    }

    printf("%s\n",goal?"NO":"YES");

}
