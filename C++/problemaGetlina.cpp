#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
int main() {
	char str[100];
	scanf("%[^\n\r]\n",str);
	printf("%d\n",(int)strlen(str));
	scanf("%[^\n\r]",str);
	printf("%d\n",(int)strlen(str));
	
	return 0;
}

