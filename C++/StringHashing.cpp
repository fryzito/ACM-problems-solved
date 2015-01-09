#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
#define MAXN 10004
char str[MAXN];
char str2[MAXN];
unsigned long long pow[MAXN];
unsigned long long hash[MAXN];
int p = 31;
int main(){
	pow[0]=1;
	for(int i=0;i<MAXN;i++)
		pow[i]= pow[i-1]*p;
	for(int i=0;str[i];i++){
			hash[i]=(str[i]-'a'+1)*pow[i];
			if(i) hash[i]+=hash[i-1];
		}
	while(gets(str)){
		gets(str2);
		unsigned long long h = 0;
		for(int i=0;str2[i];i++){
			
			h+=(str2[i]-'a'+1)*pow[i];
		}
		unsigned long long h_s;
		int cont=0;
		for(int i=0;i+strlen(str2)<strlen(str);i++){
			h_s = hash[i+strlen(str2)];
			if(i) h_s-=hash[i-1];
			if(h*pow[i]==h_s){
				cont++;
			}
		}
		printf("%d\n");
	}
	return 0;
}
