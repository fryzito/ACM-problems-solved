#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#define dbg(x)cout<<#x<<"="<<x<<endl
using namespace std;
string fib[101];
void go(int n){
};
string str;
int main () {
	fib[0]="0";
	fib[1]="1";
	for(int i=2;i<=40;i++) {
		fib[i]=fib[i-1]+fib[i-2];
	}
	int nc,n,i,j;scanf("%d\n",&nc);		
	while(nc--) {
		str="";
		scanf("%d %d %d\n",&n,&i,&j);
		if(n<=40)
			printf("%s\n",fib[n].substr(i,j-i).c_str());
		else{
			go(n);
			printf("%s\n",str.substr(i,j-i).c_str());
		}
	}
	return 0;
}