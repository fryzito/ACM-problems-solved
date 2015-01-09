#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	while(true)
	{
		if (a==b) break;
		if (a < b)
		{
			a= a+1;
		}
		else
		{
			b= b+1;
		}
	}
	printf("el numero a = %d, y el numero b = %d\n",a,b);
	return 0;
}
